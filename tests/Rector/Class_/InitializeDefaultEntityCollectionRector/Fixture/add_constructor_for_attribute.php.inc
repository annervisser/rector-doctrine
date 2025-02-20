<?php

namespace Rector\Doctrine\Tests\Rector\Class_\InitializeDefaultEntityCollectionRector\Fixture;

use Doctrine\ORM\Mapping as ORM;

#[ORM\Entity]
class SomeClass
{
    #[ORM\OneToMany(targetEntity: "MarketingEvent")]
    private $marketingEvents = [];
}

?>
-----
<?php

namespace Rector\Doctrine\Tests\Rector\Class_\InitializeDefaultEntityCollectionRector\Fixture;

use Doctrine\ORM\Mapping as ORM;

#[ORM\Entity]
class SomeClass
{
    #[ORM\OneToMany(targetEntity: "MarketingEvent")]
    private $marketingEvents = [];
    public function __construct()
    {
        $this->marketingEvents = new \Doctrine\Common\Collections\ArrayCollection();
    }
}

?>
