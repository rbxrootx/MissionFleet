// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58794770 .. +0x19C bytes.
extern "C" __declspec(naked) void FUN_58794770() {
    __asm {
        // 0x58794770: push esi
        __asm _emit 0x56
        // 0x58794771: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58794773: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58794777: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x58794779: je 0x58794906
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879477F: cmp dword ptr [esi + 0x98], 0x40000000
        __asm _emit 0x81
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58794789: push edi
        __asm _emit 0x57
        // 0x5879478A: jne 0x587948a7
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58794790: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58794793: push ebx
        __asm _emit 0x53
        // 0x58794794: mov ebx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879479A: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5879479C: jne 0x587947ad
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x5879479E: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587947A1: cmp ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x3B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587947A7: je 0x5879487a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587947AD: mov edi, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587947B3: sub edi, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x587947B6: sub ebx, eax
        __asm _emit 0x2B
        __asm _emit 0xD8
        // 0x587947B8: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x587947BB: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587947BE: jne 0x58794834
        __asm _emit 0x75
        __asm _emit 0x74
        // 0x587947C0: lea edx, [ebx + 7]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x07
        // 0x587947C3: cmp edx, 0xe
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0E
        // 0x587947C6: ja 0x587947ed
        __asm _emit 0x77
        __asm _emit 0x25
        // 0x587947C8: lea eax, [ebx + 3]
        __asm _emit 0x8D
        __asm _emit 0x43
        __asm _emit 0x03
        // 0x587947CB: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x587947CE: ja 0x587947e4
        __asm _emit 0x77
        __asm _emit 0x14
        // 0x587947D0: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587947D2: jge 0x587947d9
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x587947D4: or ebx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCB
        __asm _emit 0xFF
        // 0x587947D7: jmp 0x587947fa
        __asm _emit 0xEB
        __asm _emit 0x21
        // 0x587947D9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587947DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587947DD: setg cl
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC1
        // 0x587947E0: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x587947E2: jmp 0x587947fa
        __asm _emit 0xEB
        __asm _emit 0x16
        // 0x587947E4: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x587947E6: cdq
        __asm _emit 0x99
        // 0x587947E7: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587947E9: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x587947EB: jmp 0x587947f8
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x587947ED: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x587947EF: cdq
        __asm _emit 0x99
        // 0x587947F0: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x587947F3: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587947F5: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587947F8: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587947FA: lea edx, [edi + 7]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x07
        // 0x587947FD: cmp edx, 0xe
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0E
        // 0x58794800: ja 0x58794827
        __asm _emit 0x77
        __asm _emit 0x25
        // 0x58794802: lea eax, [edi + 3]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x03
        // 0x58794805: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x58794808: ja 0x5879481e
        __asm _emit 0x77
        __asm _emit 0x14
        // 0x5879480A: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5879480C: jge 0x58794813
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x5879480E: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCF
        __asm _emit 0xFF
        // 0x58794811: jmp 0x58794864
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58794813: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58794815: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58794817: setg cl
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC1
        // 0x5879481A: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5879481C: jmp 0x58794864
        __asm _emit 0xEB
        __asm _emit 0x46
        // 0x5879481E: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58794820: cdq
        __asm _emit 0x99
        // 0x58794821: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58794823: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x58794825: jmp 0x58794862
        __asm _emit 0xEB
        __asm _emit 0x3B
        // 0x58794827: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58794829: cdq
        __asm _emit 0x99
        // 0x5879482A: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x5879482D: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5879482F: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58794832: jmp 0x58794862
        __asm _emit 0xEB
        __asm _emit 0x2E
        // 0x58794834: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x58794837: jne 0x58794864
        __asm _emit 0x75
        __asm _emit 0x2B
        // 0x58794839: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x5879483C: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5879483E: jle 0x58794848
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x58794840: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x58794842: jl 0x58794852
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x58794844: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58794846: jmp 0x58794852
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x58794848: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5879484A: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x5879484C: cmp ebx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD9
        // 0x5879484E: jg 0x58794852
        __asm _emit 0x7F
        __asm _emit 0x02
        // 0x58794850: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58794852: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58794854: jle 0x5879485c
        __asm _emit 0x7E
        __asm _emit 0x06
        // 0x58794856: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x58794858: jl 0x58794864
        __asm _emit 0x7C
        __asm _emit 0x0A
        // 0x5879485A: jmp 0x58794862
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x5879485C: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x5879485E: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x58794860: jg 0x58794864
        __asm _emit 0x7F
        __asm _emit 0x02
        // 0x58794862: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58794864: push edi
        __asm _emit 0x57
        // 0x58794865: push ebx
        __asm _emit 0x53
        // 0x58794866: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58794868: call 0x58902e10
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0xE5
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879486D: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58794873: push edi
        __asm _emit 0x57
        // 0x58794874: push ebx
        __asm _emit 0x53
        // 0x58794875: call 0x58902e10
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0xE5
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879487A: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x5879487D: pop ebx
        __asm _emit 0x5B
        // 0x5879487E: cmp edx, dword ptr [esi + 0xac]
        __asm _emit 0x3B
        __asm _emit 0x96
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58794884: jne 0x587948a7
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x58794886: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58794889: cmp eax, dword ptr [esi + 0xb0]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879488F: jne 0x587948a7
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x58794891: cmp dword ptr [esi + 0x98], 0x40000000
        __asm _emit 0x81
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x5879489B: jne 0x587948a7
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x5879489D: mov dword ptr [esi + 0x98], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587948A7: cmp dword ptr [esi + 0x98], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587948AE: jne 0x587948e7
        __asm _emit 0x75
        __asm _emit 0x37
        // 0x587948B0: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x587948B3: push ecx
        __asm _emit 0x51
        // 0x587948B4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587948B6: call 0x587944b0
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587948BB: cmp dword ptr [esi + 0x94], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587948C2: jne 0x587948e7
        __asm _emit 0x75
        __asm _emit 0x23
        // 0x587948C4: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587948CA: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x587948CD: push edx
        __asm _emit 0x52
        // 0x587948CE: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587948D0: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0xCC
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587948D5: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587948D7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587948D9: je 0x587948e2
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587948DB: call 0x587942c0
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587948E0: jmp 0x587948e7
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x587948E2: call 0x58794340
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587948E7: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x587948EA: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587948EC: je 0x58794905
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x587948EE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x587948F0: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x38
        // 0x587948F3: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587948F5: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587948F8: cmp edi, dword ptr [esi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x587948FB: je 0x58794908
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587948FD: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587948FF: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58794901: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58794903: jne 0x587948f0
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x58794905: pop edi
        __asm _emit 0x5F
        // 0x58794906: pop esi
        __asm _emit 0x5E
        // 0x58794907: ret
        __asm _emit 0xC3
        // 0x58794908: pop edi
        __asm _emit 0x5F
        // 0x58794909: pop esi
        __asm _emit 0x5E
        // 0x5879490A: jmp edx
        __asm _emit 0xFF
        __asm _emit 0xE2
    }
}
