<?php

namespace Rector\Doctrine\Tests\Rector\Property\TypedPropertyFromToOneRelationTypeRector\Fixture;

use Doctrine\ORM\Mapping as ORM;

class DoctrineOneToOne
{
    /**
     * @ORM\OneToOne(targetEntity="Rector\Doctrine\Tests\Rector\Property\TypedPropertyFromToOneRelationTypeRector\Source\Company")
     */
    private $company;
}

?>
-----
<?php

namespace Rector\Doctrine\Tests\Rector\Property\TypedPropertyFromToOneRelationTypeRector\Fixture;

use Doctrine\ORM\Mapping as ORM;

class DoctrineOneToOne
{
    /**
     * @ORM\OneToOne(targetEntity="Rector\Doctrine\Tests\Rector\Property\TypedPropertyFromToOneRelationTypeRector\Source\Company")
     */
    private ?\Rector\Doctrine\Tests\Rector\Property\TypedPropertyFromToOneRelationTypeRector\Source\Company $company = null;
}

?>
