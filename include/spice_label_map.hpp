#pragma once

#include <string>
#include <limits>

namespace Spice
{
    /*
    * Maps a celestial object or barycentre to it's spice ID
    */
    enum class ObjectID
    {
        INVALID    = std::numeric_limits<int>::min(),

        //
        // Natural bodies
        //        

        SOLAR_SYSTEM_BARYCENTRE = 0,
        MERCURY_BARYCENTRE      = 1,        
        VENUS_BARYCENTRE        = 2,
        EARTH_BARYCENTRE        = 3,
        MARS_BARYCENTRE         = 4,
        JUPITER_BARYCENTRE      = 5,
        SATURN_BARYCENTRE       = 6,
        URANUS_BARYCENTRE       = 7,
        NEPTUNE_BARYCENTRE      = 8,
        PLUTO_BARYCENTRE        = 9,
        SUN                     = 10,

        // Mercurian system        
        MERCURY         = 199,

        // Venusian system        
        VENUS           = 299,

        // Earth System        
        MOON            = 301,
        EARTH           = 399,

        // Martian System        
        PHOBOS          = 401,
        DEIMOS          = 402,
        MARS            = 499,

        // Jovian System        
        IO              = 501,
        EUROPA          = 502,
        GANYMEDE        = 503,
        CALLISTO        = 504,
        AMALTHEA        = 505,
        HIMALIA         = 506,
        ELARA           = 507,
        PASIPHAE        = 508,
        SINOPE          = 509,
        LYSITHEA        = 510,
        CARME           = 511,
        ANANKE          = 512,
        LEDA            = 513,
        THEBE           = 514,
        ADRASTEA        = 515,
        METIS           = 516,
        CALLIRHRHOE     = 517,
        THEMISTO        = 518,
        MAGACLITE       = 519,
        TAYGETE         = 520,
        CHALDENE        = 521,
        HARPALYKE       = 522,
        KALYKE          = 523,
        IOCASTE         = 524,
        ERINOME         = 525,
        ISONOE          = 526,
        PRAXIDIKE       = 527,
        AUTONOE         = 528,
        THYONE          = 529,
        HERMIPPE        = 530,
        AITNE           = 531,
        EURYDOME        = 532,
        EUANTHE         = 533,
        EUPORIE         = 534,
        ORTHOSIE        = 535,
        SPONDE          = 536,
        KALE            = 537,
        PASITHEE        = 538,
        HEGEMONE        = 539,
        MNEME           = 540,
        AOEDE           = 541,
        THELXINOE       = 542,
        ARCHE           = 543,
        KALLICHORE      = 544,
        HELIKE          = 545,
        CARPO           = 546,
        EUKELADE        = 547,
        CYLLENE         = 548,
        KORE            = 549,
        HERSE           = 550,
        JUPITER_MOON_51 = 551,
        JUPITER_MOON_52 = 552,
        JUPITER_MOON_53 = 553,
        JUPITER_MOON_54 = 554,
        JUPITER_MOON_55 = 555,
        JUPITER_MOON_56 = 556,
        JUPITER_MOON_57 = 557,
        JUPITER_MOON_58 = 558,
        JUPITER_MOON_59 = 559,
        JUPITER_MOON_60 = 560,
        JUPITER_MOON_61 = 561,
        JUPITER_MOON_62 = 562,
        JUPITER_MOON_63 = 563,
        JUPITER_MOON_64 = 564,
        JUPITER_MOON_65 = 565,
        JUPITER_MOON_66 = 566,
        JUPITER_MOON_67 = 567,
        JUPITER_MOON_68 = 568,
        JUPITER_MOON_69 = 569,
        JUPITER_MOON_70 = 570,
        JUPITER_MOON_71 = 571,
        JUPITER_MOON_72 = 572,
        JUPITER         = 599,

        // Cronian System
        MIMAS      = 601,
        ENCELADUS  = 602,
        TETHYS     = 603,
        DIONE      = 604,
        RHEA       = 605,
        TITAN      = 606,
        HYPERION   = 607,
        IAPETUS    = 608,
        PHOEBE     = 609,
        JANUS      = 610,
        EPIMETHEUS = 611,
        HELENE     = 612,
        TELESTO    = 613,
        CALYPSO    = 614,
        ATLAS      = 615,
        PROMETHEUS = 616,
        PANDORA    = 617,
        PAN        = 618,
        YMIR       = 619,
        PAALIAQ    = 620,
        TARVOS     = 621,
        IJIRAQ     = 622,
        SUTTUNGR   = 623,
        KIVIUQ     = 624,
        MUNDILFARI = 625,
        ALBIORIX   = 626,
        SKATHI     = 627,
        ERRIAPUS   = 628,
        SIARNAQ    = 629,
        THRYMR     = 630,
        NARVI      = 631,
        AEGIR      = 636,
        BEBHIONN   = 637,
        BERGELMIR  = 638,
        BESTLA     = 639,
        FARBAUTI   = 640,
        FENRIR     = 641,
        FORNJOT    = 642,
        HATI       = 643,
        HYRROKKIN  = 644,
        KARI       = 645,
        LOGE       = 646,
        SKOLL      = 647,
        SURTUR     = 648,
        JARNSAXA   = 650,
        GREIP      = 651,
        TARQEQ     = 652,
        AEGAEON    = 653,
        SATURN     = 699,

        // Uranian system
        ARIEL      = 701,
        UMBRIEL    = 702,
        TITANIA    = 703,
        OBERON     = 704,
        MIRANDA    = 705,
        CORDELIA   = 706,
        OPHELIA    = 707,
        BIANCA     = 708,
        CRESSIDA   = 709,
        DESDEMONA  = 710,
        JULIET     = 711,
        PORTIA     = 712,
        ROSALIND   = 713,
        BELINDA    = 714,
        PUCK       = 715,
        CALIBAN    = 716,
        SYCORAX    = 717,
        PROSPERO   = 718,
        SETEBOS    = 719,
        STEPHANO   = 720,
        TRINCULO   = 721,
        FRANCISCO  = 722,
        MARGARET   = 723,
        FERDINAND  = 724,
        PERDITA    = 725,
        MAB        = 726,
        CUPID      = 727,
        URANUS     = 799,

        // Neptunian System
        TRITON     = 801,
        NEREID     = 802,
        NAIAD      = 803,
        THALASSA   = 804,
        DESPINA    = 805,
        GALATEA    = 806,
        LARISSA    = 807,
        PROTEUS    = 808,
        HALIMEDE   = 809,
        PSAMATHE   = 810,
        SAO        = 811,
        LAOMEDEIA  = 812,
        NESO       = 813,
        NEPTUNE    = 899,
        
        // Plutonian system
        CHARON     = 901,
        NIX        = 902,
        HYDRA      = 903,
        KERBEROS   = 904,
        STYX       = 905,
        PLUTO      = 999,        

        // Manmade objects        
        INTERNATIONAL_SPACE_STATION = -125544,
        GATEWAY                     = -60000 // reference Lunar gateway NRHO
    };

    /* 
     * Return a string of the Spice object ID
     */
    std::string GetObjectString(ObjectID ID) noexcept;

    /* 
     * List of built in reference frames
     */
    enum class FrameID
    {
        INVALID = std::numeric_limits<int>::min(),    
        J2000 = 0,
        ITRF93,
        EARTH_FIXED,
        B1950,
        FK4,
        DE_118,
        DE_96,
        DE_108,
        DE_111,
        DE_114,
        DE_122,
        DE_125,
        DE_130,
        DE_140,
        DE_142,
        DE_143,
        DE_200,
        DE_202,
        ECLIPJ2000,
        ECLIPB1950,
        GALACTIC,
        MARSIAU,
        IAU_ADRASTEA,
        IAU_AMALTHEA,
        IAU_ANANKE,
        IAU_ARIEL,
        IAU_ATLAS,
        IAU_BELINDA,
        IAU_BENNU,
        IAU_BIANCA,
        IAU_BORRELLY,
        IAU_CALLIRRHOE,
        IAU_CALLISTO,
        IAU_CALYPSO,
        IAU_CARME,
        IAU_CERES,
        IAU_CHALDENE,
        IAU_CHARON,
        IAU_CORDELIA,
        IAU_CRESSIDA,
        IAU_DAVIDA,
        IAU_DEIMOS,
        IAU_DESDEMONA,
        IAU_DESPINA,
        IAU_DIONE,
        IAU_EARTH,
        IAU_ELARA,
        IAU_ENCELADUS,
        IAU_EPIMETHEUS,
        IAU_ERINOME,
        IAU_EROS,
        IAU_EUROPA,
        IAU_GALATEA,
        IAU_GANYMEDE,
        IAU_GASPRA,
        IAU_HARPALYKE,
        IAU_HELENE,
        IAU_HIMALIA,
        IAU_HYPERION,
        IAU_IAPETUS,
        IAU_IDA,
        IAU_IO,
        IAU_IOCASTE,
        IAU_ISONOE,
        IAU_ITOKAWA,
        IAU_JANUS,
        IAU_JULIET,
        IAU_JUPITER,
        IAU_KALYKE,
        IAU_LARISSA,
        IAU_LEDA,
        IAU_LUTETIA,
        IAU_LYSITHEA,
        IAU_MAGACLITE,
        IAU_MARS,
        IAU_MERCURY,
        IAU_METIS,
        IAU_MIMAS,
        IAU_MIRANDA,
        IAU_MOON,
        IAU_NAIAD,
        IAU_NEPTUNE,
        IAU_NEREID,
        IAU_OBERON,
        IAU_OPHELIA,
        IAU_PALLAS,
        IAU_PAN,
        IAU_PANDORA,
        IAU_PASIPHAE,
        IAU_PHOBOS,
        IAU_PHOEBE,
        IAU_PLUTO,
        IAU_PORTIA,
        IAU_PRAXIDIKE,
        IAU_PROMETHEUS,
        IAU_PROTEUS,
        IAU_PUCK,
        IAU_RHEA,
        IAU_ROSALIND,
        IAU_SATURN,
        IAU_SINOPE,
        IAU_STEINS,
        IAU_SUN,
        IAU_TAYGETE,
        IAU_TELESTO,
        IAU_TEMPEL_1,
        IAU_TETHYS,
        IAU_THALASSA,
        IAU_THEBE,
        IAU_THEMISTO,
        IAU_TITAN,
        IAU_TITANIA,
        IAU_TRITON,
        IAU_UMBRIEL,
        IAU_URANUS,
        IAU_VENUS,
        IAU_VESTA,
    }; 

    /* 
     * Returns a string of the Spice frame ID
     */
    std::string GetFrameString(FrameID ID) noexcept;

    /* 
     * Built in aberration corrections
     */
    enum class AbCorrectionID
    {
        INVALID = std::numeric_limits<int>::min(),    
        NONE = 0,
        LIGHT_TIME,
        LIGHT_TIME_STELLAR,
        CONVERGED_NEWTONIAN,
        CONVERGED_NEWTONIAN_STELLAR,
        LIGHT_TIME_TRANS,
        LIGHT_TIME_STELLAR_TRANS,
        CONVERGED_NEWTONIAN_TRANS,
        CONVERGED_NEWTONIAN_STELLAR_TRANS
    }; 

    /* 
     * Returns a string of the Spice aberration correction ID
     */
    std::string GetAbCorrectionString(AbCorrectionID ID) noexcept;
}
