// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 783 bytes in 2 exact ranges.
// Source symbol alias: FUN_587847d0.

// Ghidra body range 0x587847D0..0x5878485D; 141 mapped bytes.
extern "C" __declspec(naked) void FUN_587847d0_segment_00() {
    __asm {
        // 0x587847D0: sub esp, 0x3c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x3C
        // 0x587847D3: push ebx
        __asm _emit 0x53
        // 0x587847D4: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587847D6: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587847DA: mov eax, dword ptr [eax + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x68
        // 0x587847DD: push ebp
        __asm _emit 0x55
        // 0x587847DE: mov ebp, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x587847E2: mov edx, dword ptr [ebp*4 + 0x58a0b4d8]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0xAD
        __asm _emit 0xD8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587847E9: push esi
        __asm _emit 0x56
        // 0x587847EA: movzx esi, word ptr [eax + 0xa8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xB0
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587847F1: imul edx, esi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD6
        // 0x587847F4: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587847F9: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587847FB: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587847FE: push edi
        __asm _emit 0x57
        // 0x587847FF: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58784801: shr edi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x1F
        // 0x58784804: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x58784806: mov edx, dword ptr [ebp*4 + 0x58a0ed18]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0xAD
        __asm _emit 0x18
        __asm _emit 0xED
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5878480D: imul edx, esi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD6
        // 0x58784810: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x58784815: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58784817: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5878481A: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5878481C: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5878481F: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58784821: mov edx, dword ptr [0x58a0ed18]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xED
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58784827: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x5878482A: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5878482F: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58784831: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58784834: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x58784836: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58784838: shr esi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x1F
        // 0x5878483B: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x5878483D: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58784841: mov eax, dword ptr [edx + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784847: mov dword ptr [esp + 0x30], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5878484B: mov ebx, 0xc8
        __asm _emit 0xBB
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784850: lea ebp, [edi + edi]
        __asm _emit 0x8D
        __asm _emit 0x2C
        __asm _emit 0x3F
        // 0x58784853: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58784857: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5878485B: jmp 0x58784860
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x58784860..0x58784AE2; 642 mapped bytes.
extern "C" __declspec(naked) void FUN_587847d0_segment_01() {
    __asm {
        // 0x58784860: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58784865: imul ebx
        __asm _emit 0xF7
        __asm _emit 0xEB
        // 0x58784867: sar edx, 7
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x07
        // 0x5878486A: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5878486C: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5878486F: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x58784871: imul edx, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD3
        // 0x58784874: mov edi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58784878: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5878487D: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5878487F: sar edx, 7
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x07
        // 0x58784882: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58784884: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58784887: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x58784889: mov eax, 0x2710
        __asm _emit 0xB8
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878488E: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x58784890: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x58784893: inc dword ptr [esp + 0x18]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58784897: mov eax, 0x447a7a9
        __asm _emit 0xB8
        __asm _emit 0xA9
        __asm _emit 0xA7
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x5878489C: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5878489E: sar edx, 0xd
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0D
        // 0x587848A1: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587848A3: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587848A6: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587848A8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x587848AA: cmp edi, 0x2710
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587848B0: jle 0x587848b7
        __asm _emit 0x7E
        __asm _emit 0x05
        // 0x587848B2: mov edi, 0x2710
        __asm _emit 0xBF
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587848B7: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x587848B9: imul edx, esi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD6
        // 0x587848BC: mov eax, 0x68db8bad
        __asm _emit 0xB8
        __asm _emit 0xAD
        __asm _emit 0x8B
        __asm _emit 0xDB
        __asm _emit 0x68
        // 0x587848C1: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587848C3: sar edx, 0xc
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0C
        // 0x587848C6: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587848C8: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587848CB: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587848CD: add ebp, dword ptr [0x58a244c0]
        __asm _emit 0x03
        __asm _emit 0x2D
        __asm _emit 0xC0
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587848D3: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587848D5: mov dword ptr [esp + 0x3c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587848D9: mov dword ptr [esp + 0x44], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x587848DD: js 0x58784901
        __asm _emit 0x78
        __asm _emit 0x22
        // 0x587848DF: lea edx, [edi - 0x1388]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0x78
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587848E5: imul edx, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD5
        // 0x587848E8: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x587848EA: mov eax, 0x68db8bad
        __asm _emit 0xB8
        __asm _emit 0xAD
        __asm _emit 0x8B
        __asm _emit 0xDB
        __asm _emit 0x68
        // 0x587848EF: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587848F1: sar edx, 0xc
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0C
        // 0x587848F4: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587848F6: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587848F9: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587848FB: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x587848FD: mov dword ptr [esp + 0x44], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58784901: cmp ebx, 0xfa0
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784907: jle 0x58784930
        __asm _emit 0x7E
        __asm _emit 0x27
        // 0x58784909: lea eax, [ebx + ebp]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x2B
        // 0x5878490C: cmp eax, 0xfa0
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784911: jle 0x58784930
        __asm _emit 0x7E
        __asm _emit 0x1D
        // 0x58784913: cmp ebp, 0xfffff448
        __asm _emit 0x81
        __asm _emit 0xFD
        __asm _emit 0x48
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58784919: jg 0x58784929
        __asm _emit 0x7F
        __asm _emit 0x0E
        // 0x5878491B: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5878491F: cmp dword ptr [edx + 0x74], 1
        __asm _emit 0x83
        __asm _emit 0x7A
        __asm _emit 0x74
        __asm _emit 0x01
        // 0x58784923: je 0x58784a8d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784929: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5878492B: jmp 0x58784a6d
        __asm _emit 0xE9
        __asm _emit 0x3D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784930: lea edi, [ebx + ebp]
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x2B
        // 0x58784933: mov dword ptr [esp + 0x2c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58784937: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58784939: jge 0x58784964
        __asm _emit 0x7D
        __asm _emit 0x29
        // 0x5878493B: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x5878493D: imul eax, eax, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x58784940: cdq
        __asm _emit 0x99
        // 0x58784941: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x58784943: cdq
        __asm _emit 0x99
        // 0x58784944: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58784946: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58784948: imul eax, esi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC6
        // 0x5878494B: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5878494D: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58784952: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58784954: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58784957: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x58784959: shr esi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x1F
        // 0x5878495C: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x5878495E: add esi, ecx
        __asm _emit 0x03
        __asm _emit 0xF1
        // 0x58784960: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58784962: jmp 0x5878499b
        __asm _emit 0xEB
        __asm _emit 0x37
        // 0x58784964: cmp edi, 0xfa0
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878496A: jle 0x58784999
        __asm _emit 0x7E
        __asm _emit 0x2D
        // 0x5878496C: mov eax, 0xfa0
        __asm _emit 0xB8
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784971: sub eax, ebx
        __asm _emit 0x2B
        __asm _emit 0xC3
        // 0x58784973: imul eax, eax, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x58784976: cdq
        __asm _emit 0x99
        // 0x58784977: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x58784979: mov edi, 0xfa0
        __asm _emit 0xBF
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878497E: cdq
        __asm _emit 0x99
        // 0x5878497F: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58784981: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58784983: imul eax, esi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC6
        // 0x58784986: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58784988: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5878498D: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5878498F: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58784992: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x58784994: shr esi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x1F
        // 0x58784997: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x58784999: add esi, ecx
        __asm _emit 0x03
        __asm _emit 0xF1
        // 0x5878499B: mov ebp, dword ptr [0x58a244bc]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xBC
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587849A1: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587849A3: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x587849A5: mov dword ptr [esp + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587849A9: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587849AB: imul ecx, ecx, 0x75
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x75
        // 0x587849AE: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587849B0: sub eax, ebx
        __asm _emit 0x2B
        __asm _emit 0xC3
        // 0x587849B2: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587849B6: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587849BB: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587849BD: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587849C0: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587849C2: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587849C5: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587849C7: mov edx, ebp
        __asm _emit 0x8B
        __asm _emit 0xD5
        // 0x587849C9: imul edx, edx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xD2
        __asm _emit 0x64
        // 0x587849CC: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587849D1: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587849D3: mov eax, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587849D7: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587849DA: mov ebp, edx
        __asm _emit 0x8B
        __asm _emit 0xEA
        // 0x587849DC: shr ebp, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xED
        __asm _emit 0x1F
        // 0x587849DF: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xEA
        // 0x587849E1: cdq
        __asm _emit 0x99
        // 0x587849E2: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587849E4: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587849E6: cdq
        __asm _emit 0x99
        // 0x587849E7: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x587849E9: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587849ED: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x587849EF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587849F1: cdq
        __asm _emit 0x99
        // 0x587849F2: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587849F4: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587849F6: cdq
        __asm _emit 0x99
        // 0x587849F7: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587849F9: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x587849FB: jle 0x58784a08
        __asm _emit 0x7E
        __asm _emit 0x0B
        // 0x587849FD: mov eax, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x58784A01: cdq
        __asm _emit 0x99
        // 0x58784A02: idiv dword ptr [esp + 0x20]
        __asm _emit 0xF7
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58784A06: jmp 0x58784a0d
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x58784A08: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58784A0A: cdq
        __asm _emit 0x99
        // 0x58784A0B: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x58784A0D: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58784A11: cdq
        __asm _emit 0x99
        // 0x58784A12: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58784A14: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58784A16: cdq
        __asm _emit 0x99
        // 0x58784A17: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58784A19: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x58784A1B: sar ebp, 1
        __asm _emit 0xD1
        __asm _emit 0xFD
        // 0x58784A1D: inc ebp
        __asm _emit 0x45
        // 0x58784A1E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58784A20: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x58784A22: jle 0x58784a5d
        __asm _emit 0x7E
        __asm _emit 0x39
        // 0x58784A24: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58784A28: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58784A2C: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58784A30: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58784A34: cdq
        __asm _emit 0x99
        // 0x58784A35: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x58784A37: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58784A39: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58784A3D: cdq
        __asm _emit 0x99
        // 0x58784A3E: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x58784A40: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58784A44: add dword ptr [esp + 0x14], edx
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58784A48: add esi, ecx
        __asm _emit 0x03
        __asm _emit 0xF1
        // 0x58784A4A: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58784A4C: mov eax, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x58784A50: add dword ptr [esp + 0x10], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58784A54: add edi, ebx
        __asm _emit 0x03
        __asm _emit 0xFB
        // 0x58784A56: sub dword ptr [esp + 0x20], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x58784A5B: jne 0x58784a30
        __asm _emit 0x75
        __asm _emit 0xD3
        // 0x58784A5D: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58784A5F: jle 0x58784ab8
        __asm _emit 0x7E
        __asm _emit 0x57
        // 0x58784A61: mov esi, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58784A65: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58784A69: mov ebp, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58784A6D: add ecx, esi
        __asm _emit 0x03
        __asm _emit 0xCE
        // 0x58784A6F: cmp dword ptr [esp + 0x18], 0x3e8
        __asm _emit 0x81
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784A77: mov dword ptr [esp + 0x30], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58784A7B: jl 0x58784860
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xDF
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58784A81: pop edi
        __asm _emit 0x5F
        // 0x58784A82: pop esi
        __asm _emit 0x5E
        // 0x58784A83: pop ebp
        __asm _emit 0x5D
        // 0x58784A84: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58784A86: pop ebx
        __asm _emit 0x5B
        // 0x58784A87: add esp, 0x3c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x3C
        // 0x58784A8A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58784A8D: mov eax, dword ptr [0x58a244bc]
        __asm _emit 0xA1
        __asm _emit 0xBC
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58784A92: imul eax, eax, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x58784A95: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58784A97: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58784A9C: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58784A9E: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58784AA1: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58784AA3: shr edi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x1F
        // 0x58784AA6: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x58784AA8: lea eax, [esi + ecx]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x0E
        // 0x58784AAB: cdq
        __asm _emit 0x99
        // 0x58784AAC: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x58784AAE: pop edi
        __asm _emit 0x5F
        // 0x58784AAF: pop esi
        __asm _emit 0x5E
        // 0x58784AB0: pop ebp
        __asm _emit 0x5D
        // 0x58784AB1: pop ebx
        __asm _emit 0x5B
        // 0x58784AB2: add esp, 0x3c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x3C
        // 0x58784AB5: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58784AB8: mov eax, dword ptr [0x58a244bc]
        __asm _emit 0xA1
        __asm _emit 0xBC
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58784ABD: imul eax, eax, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x58784AC0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58784AC2: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58784AC7: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58784AC9: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58784ACC: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58784ACE: pop edi
        __asm _emit 0x5F
        // 0x58784ACF: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x58784AD2: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58784AD4: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x58784AD6: pop esi
        __asm _emit 0x5E
        // 0x58784AD7: cdq
        __asm _emit 0x99
        // 0x58784AD8: pop ebp
        __asm _emit 0x5D
        // 0x58784AD9: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x58784ADB: pop ebx
        __asm _emit 0x5B
        // 0x58784ADC: add esp, 0x3c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x3C
        // 0x58784ADF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
