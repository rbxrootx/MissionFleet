// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 532 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b1410.

// Ghidra body range 0x587B1410..0x587B1624; 532 mapped bytes.
extern "C" __declspec(naked) void FUN_587b1410_segment_00() {
    __asm {
        // 0x587B1410: push esi
        __asm _emit 0x56
        // 0x587B1411: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587B1413: mov edx, dword ptr [esi + 0x12c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1419: mov eax, dword ptr [esi + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B141F: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x587B1421: je 0x587b1622
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xFB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1427: push ebp
        __asm _emit 0x55
        // 0x587B1428: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587B142A: cmp dword ptr [esi + 0x84], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1430: jne 0x587b1607
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1436: push ebx
        __asm _emit 0x53
        // 0x587B1437: push edi
        __asm _emit 0x57
        // 0x587B1438: cmp dword ptr [esi + 0x108], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B143E: je 0x587b144f
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x587B1440: mov ebx, dword ptr [esi + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1446: imul ebx, dword ptr [esi + 0xd0]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x9E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B144D: jmp 0x587b1451
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587B144F: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587B1451: mov edi, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1457: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587B1459: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x587B145B: mov dword ptr [esi + 0x12c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1461: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587B1463: cdq
        __asm _emit 0x99
        // 0x587B1464: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587B1466: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587B1468: add edi, 2
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x02
        // 0x587B146B: cmp eax, 0x708
        __asm _emit 0x3D
        __asm _emit 0x08
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1470: jge 0x587b147c
        __asm _emit 0x7D
        __asm _emit 0x0A
        // 0x587B1472: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x587B1474: jle 0x587b149c
        __asm _emit 0x7E
        __asm _emit 0x26
        // 0x587B1476: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x587B1478: jge 0x587b14a4
        __asm _emit 0x7D
        __asm _emit 0x2A
        // 0x587B147A: jmp 0x587b14a2
        __asm _emit 0xEB
        __asm _emit 0x26
        // 0x587B147C: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x587B147E: jle 0x587b148f
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x587B1480: mov eax, 0xe10
        __asm _emit 0xB8
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1485: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x587B1487: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587B1489: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x587B148B: jge 0x587b14a4
        __asm _emit 0x7D
        __asm _emit 0x17
        // 0x587B148D: jmp 0x587b14a2
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x587B148F: add ecx, 0xe10
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1495: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587B1497: cdq
        __asm _emit 0x99
        // 0x587B1498: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587B149A: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587B149C: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x587B149E: jge 0x587b14a4
        __asm _emit 0x7D
        __asm _emit 0x04
        // 0x587B14A0: neg edi
        __asm _emit 0xF7
        __asm _emit 0xDF
        // 0x587B14A2: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587B14A4: mov eax, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B14AA: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x587B14AC: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x587B14AE: cdq
        __asm _emit 0x99
        // 0x587B14AF: mov ecx, 0xe10
        __asm _emit 0xB9
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B14B4: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587B14B6: cmp edx, ebp
        __asm _emit 0x3B
        __asm _emit 0xD5
        // 0x587B14B8: mov dword ptr [esi + 0xa8], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B14BE: jge 0x587b14c8
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x587B14C0: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x587B14C2: mov dword ptr [esi + 0xa8], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B14C8: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B14CE: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B14D4: mov edi, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B14DA: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B14DF: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587B14E2: ja 0x587b154f
        __asm _emit 0x77
        __asm _emit 0x6B
        // 0x587B14E4: jmp dword ptr [eax*4 + 0x587b1624]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0x16
        __asm _emit 0x7B
        __asm _emit 0x58
        // 0x587B14EB: mov dword ptr [esi + 0xf4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B14F1: cmp dword ptr [esi + 0xc8], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B14F7: je 0x587b1519
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x587B14F9: mov eax, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B14FF: cmp dword ptr [esi + 0xc4], eax
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1505: jle 0x587b1581
        __asm _emit 0x7E
        __asm _emit 0x7A
        // 0x587B1507: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x587B1509: jge 0x587b154f
        __asm _emit 0x7D
        __asm _emit 0x44
        // 0x587B150B: mov dword ptr [esi + 0xa8], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1511: mov dword ptr [esi + 0x108], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1517: jmp 0x587b154f
        __asm _emit 0xEB
        __asm _emit 0x36
        // 0x587B1519: mov eax, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B151F: add eax, 0x708
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1524: cdq
        __asm _emit 0x99
        // 0x587B1525: mov ebp, 0xe10
        __asm _emit 0xBD
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B152A: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x587B152C: mov ebx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1532: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x587B1534: jle 0x587b1565
        __asm _emit 0x7E
        __asm _emit 0x2F
        // 0x587B1536: cmp ebx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD9
        // 0x587B1538: jle 0x587b154a
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587B153A: mov dword ptr [esi + 0xa8], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1540: mov dword ptr [esi + 0x108], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B154A: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B154F: mov edx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1555: push ebx
        __asm _emit 0x53
        // 0x587B1556: push edx
        __asm _emit 0x52
        // 0x587B1557: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B1559: call 0x587b0930
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B155E: pop edi
        __asm _emit 0x5F
        // 0x587B155F: pop ebx
        __asm _emit 0x5B
        // 0x587B1560: jmp 0x587b160d
        __asm _emit 0xE9
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1565: cmp ebx, edi
        __asm _emit 0x3B
        __asm _emit 0xDF
        // 0x587B1567: jge 0x587b154a
        __asm _emit 0x7D
        __asm _emit 0xE1
        // 0x587B1569: mov dword ptr [esi + 0xa8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B156F: jmp 0x587b1540
        __asm _emit 0xEB
        __asm _emit 0xCF
        // 0x587B1571: mov eax, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1577: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x587B1579: mov dword ptr [esi + 0xf4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B157F: jl 0x587b150b
        __asm _emit 0x7C
        __asm _emit 0x8A
        // 0x587B1581: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587B1583: jle 0x587b154f
        __asm _emit 0x7E
        __asm _emit 0xCA
        // 0x587B1585: mov dword ptr [esi + 0xa8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B158B: mov dword ptr [esi + 0x108], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1591: jmp 0x587b154f
        __asm _emit 0xEB
        __asm _emit 0xBC
        // 0x587B1593: mov eax, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1599: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B159F: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x587B15A1: mov dword ptr [esi + 0xf4], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B15A7: jl 0x587b15b7
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x587B15A9: cmp eax, dword ptr [esi + 0xbc]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B15AF: jg 0x587b15b7
        __asm _emit 0x7F
        __asm _emit 0x06
        // 0x587B15B1: mov dword ptr [esi + 0xf4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B15B7: mov edx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B15BD: mov edi, 0xe10
        __asm _emit 0xBF
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B15C2: sub edi, edx
        __asm _emit 0x2B
        __asm _emit 0xFA
        // 0x587B15C4: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587B15C6: jl 0x587b15d9
        __asm _emit 0x7C
        __asm _emit 0x11
        // 0x587B15C8: mov edi, 0xe10
        __asm _emit 0xBF
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B15CD: sub edi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF9
        // 0x587B15CF: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587B15D1: jg 0x587b15d9
        __asm _emit 0x7F
        __asm _emit 0x06
        // 0x587B15D3: mov dword ptr [esi + 0xf4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B15D9: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x587B15DB: jge 0x587b154f
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x6E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B15E1: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x587B15E3: jl 0x587b15ec
        __asm _emit 0x7C
        __asm _emit 0x07
        // 0x587B15E5: cmp eax, 0xe10
        __asm _emit 0x3D
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B15EA: jle 0x587b15fc
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587B15EC: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x587B15EE: jl 0x587b154f
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x5B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B15F4: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587B15F6: jg 0x587b154f
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0x53
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B15FC: mov dword ptr [esi + 0xf4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1602: jmp 0x587b154f
        __asm _emit 0xE9
        __asm _emit 0x48
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B1607: mov dword ptr [esi + 0x12c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B160D: mov eax, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1613: add eax, dword ptr [esi + 0x130]
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1619: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B161B: push eax
        __asm _emit 0x50
        // 0x587B161C: call 0x587b0630
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B1621: pop ebp
        __asm _emit 0x5D
        // 0x587B1622: pop esi
        __asm _emit 0x5E
        // 0x587B1623: ret
        __asm _emit 0xC3
    }
}
