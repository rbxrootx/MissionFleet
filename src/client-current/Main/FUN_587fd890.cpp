// Complete Ghidra body ranges for the selected function.
// 2 discontiguous segments; total 6314 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587FD890 .. +0xE49 bytes.
extern "C" __declspec(naked) void FUN_587fd890_segment_00() {
    __asm {
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 6E 26 98 58: push 0x5898266e
        __asm _emit 0x68
        __asm _emit 0x6e
        __asm _emit 0x26
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 81 EC 24 04 00 00: sub esp, 0x424
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 33 C4: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xc4
        ; Exact mapped bytes 89 84 24 20 04 00 00: mov dword ptr [esp + 0x420], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 33 C4: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xc4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 84 24 38 04 00 00: lea eax, [esp + 0x438]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes A8 04: test al, 4
        __asm _emit 0xa8
        __asm _emit 0x04
        ; Exact mapped bytes 0F 84 40 18 00 00: je 0x587ff119
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 24 05 01 00: mov ecx, dword ptr [esi + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 0F 84 9C 01 00 00: je 0x587fda85
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 2C 01 00 00: mov eax, dword ptr [ecx + 0x12c]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B 05 38 90 9C 58: cmp eax, dword ptr [0x589c9038]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 74 0D: je 0x587fd904
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 94 C2: sete dl
        __asm _emit 0x0f
        __asm _emit 0x94
        __asm _emit 0xc2
        ; Exact mapped bytes 89 91 2C 01 00 00: mov dword ptr [ecx + 0x12c], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 24 05 01 00: mov ecx, dword ptr [esi + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B A9 14 01 00 00: mov ebp, dword ptr [ecx + 0x114]
        __asm _emit 0x8b
        __asm _emit 0xa9
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 28 05 01 00: mov eax, dword ptr [esi + 0x10528]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 6C 24 1C: mov dword ptr [esp + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 3B E8: cmp ebp, eax
        __asm _emit 0x3b
        __asm _emit 0xe8
        ; Exact mapped bytes 0F 84 63 01 00 00: je 0x587fda85
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B C5: sub eax, ebp
        __asm _emit 0x2b
        __asm _emit 0xc5
        ; Exact mapped bytes 8D 50 07: lea edx, [eax + 7]
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x07
        ; Exact mapped bytes 83 FA 0E: cmp edx, 0xe
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x0e
        ; Exact mapped bytes 77 25: ja 0x587fd951
        __asm _emit 0x77
        __asm _emit 0x25
        ; Exact mapped bytes 8D 50 03: lea edx, [eax + 3]
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x03
        ; Exact mapped bytes 83 FA 06: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x06
        ; Exact mapped bytes 77 14: ja 0x587fd948
        __asm _emit 0x77
        __asm _emit 0x14
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 7D 05: jge 0x587fd93d
        __asm _emit 0x7d
        __asm _emit 0x05
        ; Exact mapped bytes 83 CF FF: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xcf
        __asm _emit 0xff
        ; Exact mapped bytes EB 1F: jmp 0x587fd95c
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 9F C2: setg dl
        __asm _emit 0x0f
        __asm _emit 0x9f
        __asm _emit 0xc2
        ; Exact mapped bytes 8B FA: mov edi, edx
        __asm _emit 0x8b
        __asm _emit 0xfa
        ; Exact mapped bytes EB 14: jmp 0x587fd95c
        __asm _emit 0xeb
        __asm _emit 0x14
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes D1 FF: sar edi, 1
        __asm _emit 0xd1
        __asm _emit 0xff
        ; Exact mapped bytes EB 0B: jmp 0x587fd95c
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 83 E2 03: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x03
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes C1 FF 02: sar edi, 2
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0x02
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 40 20: mov eax, dword ptr [eax + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x20
        ; Exact mapped bytes 8D 14 2F: lea edx, [edi + ebp]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0x2f
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 8E 24 05 01 00: mov ecx, dword ptr [esi + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 51 54: mov edx, dword ptr [ecx + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x54
        ; Exact mapped bytes 89 54 24 2C: mov dword ptr [esp + 0x2c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 0F 84 EF 00 00 00: je 0x587fda6b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 69 C0 00 D0 07 00: imul eax, eax, 0x7d000
        __asm _emit 0x69
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0xd0
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FD: idiv ebp
        __asm _emit 0xf7
        __asm _emit 0xfd
        ; Exact mapped bytes 8B 99 14 01 00 00: mov ebx, dword ptr [ecx + 0x114]
        __asm _emit 0x8b
        __asm _emit 0x99
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes 8B 41 1C: mov eax, dword ptr [ecx + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x1c
        ; Exact mapped bytes 2B 41 14: sub eax, dword ptr [ecx + 0x14]
        __asm _emit 0x2b
        __asm _emit 0x41
        __asm _emit 0x14
        ; Exact mapped bytes 89 6C 24 14: mov dword ptr [esp + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 69 C0 E8 03 00 00: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xc0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FB: idiv ebx
        __asm _emit 0xf7
        __asm _emit 0xfb
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B C5: mov eax, ebp
        __asm _emit 0x8b
        __asm _emit 0xc5
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FB: idiv ebx
        __asm _emit 0xf7
        __asm _emit 0xfb
        ; Exact mapped bytes 8B 59 50: mov ebx, dword ptr [ecx + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x59
        __asm _emit 0x50
        ; Exact mapped bytes 8B 54 24 18: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 03 D3: add edx, ebx
        __asm _emit 0x03
        __asm _emit 0xd3
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 8B 91 B0 00 00 00: mov edx, dword ptr [ecx + 0xb0]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F AF 91 A8 00 00 00: imul edx, dword ptr [ecx + 0xa8]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x91
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C2: cmp eax, edx
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 7F 0F: jg 0x587fd9d6
        __asm _emit 0x7f
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 44 24 14: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B A9 14 01 00 00: mov ebp, dword ptr [ecx + 0x114]
        __asm _emit 0x8b
        __asm _emit 0xa9
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FD: idiv ebp
        __asm _emit 0xf7
        __asm _emit 0xfd
        ; Exact mapped bytes EB 14: jmp 0x587fd9ea
        __asm _emit 0xeb
        __asm _emit 0x14
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 69 C0 00 A0 0F 00: imul eax, eax, 0xfa000
        __asm _emit 0x69
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0xa0
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 7C 24 1C: idiv dword ptr [esp + 0x1c]
        __asm _emit 0xf7
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 B9 14 01 00 00: idiv dword ptr [ecx + 0x114]
        __asm _emit 0xf7
        __asm _emit 0xb9
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 C3: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xc3
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 69 C0 00 DC 05 00: imul eax, eax, 0x5dc00
        __asm _emit 0x69
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 7C 24 1C: idiv dword ptr [esp + 0x1c]
        __asm _emit 0xf7
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 8E 24 05 01 00: mov ecx, dword ptr [esi + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 99 14 01 00 00: mov ebx, dword ptr [ecx + 0x114]
        __asm _emit 0x8b
        __asm _emit 0x99
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes 8B 41 20: mov eax, dword ptr [ecx + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x20
        ; Exact mapped bytes 2B 41 18: sub eax, dword ptr [ecx + 0x18]
        __asm _emit 0x2b
        __asm _emit 0x41
        __asm _emit 0x18
        ; Exact mapped bytes 89 6C 24 18: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 69 C0 E8 03 00 00: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xc0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FB: idiv ebx
        __asm _emit 0xf7
        __asm _emit 0xfb
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B C5: mov eax, ebp
        __asm _emit 0x8b
        __asm _emit 0xc5
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FB: idiv ebx
        __asm _emit 0xf7
        __asm _emit 0xfb
        ; Exact mapped bytes 8B 5C 24 2C: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 54 24 14: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 03 D3: add edx, ebx
        __asm _emit 0x03
        __asm _emit 0xd3
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 8B 91 B4 00 00 00: mov edx, dword ptr [ecx + 0xb4]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F AF 91 AC 00 00 00: imul edx, dword ptr [ecx + 0xac]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x91
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C2: cmp eax, edx
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 7F 0D: jg 0x587fda50
        __asm _emit 0x7f
        __asm _emit 0x0d
        ; Exact mapped bytes 8B B9 14 01 00 00: mov edi, dword ptr [ecx + 0x114]
        __asm _emit 0x8b
        __asm _emit 0xb9
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C5: mov eax, ebp
        __asm _emit 0x8b
        __asm _emit 0xc5
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FF: idiv edi
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 16: jmp 0x587fda66
        __asm _emit 0xeb
        __asm _emit 0x16
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 69 C0 00 B8 0B 00: imul eax, eax, 0xbb800
        __asm _emit 0x69
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0xb8
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 7C 24 1C: idiv dword ptr [esp + 0x1c]
        __asm _emit 0xf7
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B A9 14 01 00 00: mov ebp, dword ptr [ecx + 0x114]
        __asm _emit 0x8b
        __asm _emit 0xa9
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FD: idiv ebp
        __asm _emit 0xf7
        __asm _emit 0xfd
        ; Exact mapped bytes 03 C3: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xc3
        ; Exact mapped bytes 89 41 54: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        ; Exact mapped bytes 8B 8E 24 05 01 00: mov ecx, dword ptr [esi + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 41 50: mov eax, dword ptr [ecx + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 8B 51 54: mov edx, dword ptr [ecx + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x54
        ; Exact mapped bytes 89 86 2C 05 01 00: mov dword ptr [esi + 0x1052c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x2c
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 96 30 05 01 00: mov dword ptr [esi + 0x10530], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 8B 51 50: mov edx, dword ptr [ecx + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x50
        ; Exact mapped bytes 39 9E 34 05 01 00: cmp dword ptr [esi + 0x10534], ebx
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 12 02 00 00: je 0x587fdca6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x12
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 38 05 01 00: mov eax, dword ptr [esi + 0x10538]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 3B C2: cmp eax, edx
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 85 68 01 00 00: jne 0x587fdc0a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 79 54: mov edi, dword ptr [ecx + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x79
        __asm _emit 0x54
        ; Exact mapped bytes 39 BE 3C 05 01 00: cmp dword ptr [esi + 0x1053c], edi
        __asm _emit 0x39
        __asm _emit 0xbe
        __asm _emit 0x3c
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 59 01 00 00: jne 0x587fdc0a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 34 05 01 00: mov dword ptr [esi + 0x10534], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 39 9E 8C 03 00 00: cmp dword ptr [esi + 0x38c], ebx
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0x8c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 77 02 00 00: je 0x587fdd3a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE A2 05 01 00 07: cmp word ptr [esi + 0x105a2], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xa2
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        ; Exact mapped bytes 89 9E 8C 03 00 00: mov dword ptr [esi + 0x38c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x8c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 45: je 0x587fdb18
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 86 00 0C 01 00: mov eax, dword ptr [esi + 0x10c00]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 58 7C: mov dword ptr [eax + 0x7c], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x7c
        ; Exact mapped bytes BF 00 00 00 40: mov edi, 0x40000000
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes 89 78 74: mov dword ptr [eax + 0x74], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x74
        ; Exact mapped bytes 8B 8E 00 0C 01 00: mov ecx, dword ptr [esi + 0x10c00]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 86 04 0C 01 00: mov eax, dword ptr [esi + 0x10c04]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 58 7C: mov dword ptr [eax + 0x7c], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x7c
        ; Exact mapped bytes 89 78 74: mov dword ptr [eax + 0x74], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x74
        ; Exact mapped bytes 8B 8E 04 0C 01 00: mov ecx, dword ptr [esi + 0x10c04]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 8E 08 0C 01 00: mov ecx, dword ptr [esi + 0x10c08]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x08
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 AA 3A F3 FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x3a
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 1A: jmp 0x587fdb32
        __asm _emit 0xeb
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 8E 00 0C 01 00: mov ecx, dword ptr [esi + 0x10c00]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 8E 04 0C 01 00: mov ecx, dword ptr [esi + 0x10c04]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes A1 2C 46 A2 58: mov eax, dword ptr [0x58a2462c]
        __asm _emit 0xa1
        __asm _emit 0x2c
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 34 01 00 00: mov ecx, dword ptr [eax + 0x134]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 79 50 05: cmp dword ptr [ecx + 0x50], 5
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x50
        __asm _emit 0x05
        ; Exact mapped bytes 75 2B: jne 0x587fdb6e
        __asm _emit 0x75
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 15 C4 45 A2 58: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes C7 05 DC 48 A2 58 01 00 00 00: mov dword ptr [0x58a248dc], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xdc
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 24 1F: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1f
        ; Exact mapped bytes 3C 02: cmp al, 2
        __asm _emit 0x3c
        __asm _emit 0x02
        ; Exact mapped bytes 75 13: jne 0x587fdb74
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 54 6A 05 00: call 0x588545c0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x6a
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 06: jmp 0x587fdb74
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 89 1D DC 48 A2 58: mov dword ptr [0x58a248dc], ebx
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 BE F0 05 01 00 06: cmp word ptr [esi + 0x105f0], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x06
        ; Exact mapped bytes 75 0B: jne 0x587fdb89
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 8E 08 1F 02 00: mov ecx, dword ptr [esi + 0x21f08]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x08
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 77 F2 F5 FF: call 0x5875ce00
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xf2
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 79 0C: mov edi, dword ptr [ecx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x79
        __asm _emit 0x0c
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 0F 84 9E 01 00 00: je 0x587fdd3a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 29 8B 0D 00: call 0x588d66d0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 3D 00 00 00 40: cmp eax, 0x40000000
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes 75 4F: jne 0x587fdbfd
        __asm _emit 0x75
        __asm _emit 0x4f
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 3B F0 0D 00: call 0x588dcbf0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xf0
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 44: je 0x587fdbfd
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 6A 68: push 0x68
        __asm _emit 0x6a
        __asm _emit 0x68
        ; Exact mapped bytes E8 8E F0 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xf0
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 89 9C 24 40 04 00 00: mov dword ptr [esp + 0x440], ebx
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 1B: je 0x587fdbed
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes 68 E0 2E 00 00: push 0x2ee0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 03 00 00: push 0x300
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 04 00 00: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 45 5D 0F 00: call 0x588f3930
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x5d
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587fdbef
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C7 84 24 40 04 00 00 FF FF FF FF: mov dword ptr [esp + 0x440], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 68 60: mov dword ptr [eax + 0x60], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x60
        ; Exact mapped bytes 8B 7F 78: mov edi, dword ptr [edi + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x7f
        __asm _emit 0x78
        ; Exact mapped bytes 45: inc ebp
        __asm _emit 0x45
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 75 9B: jne 0x587fdba0
        __asm _emit 0x75
        __asm _emit 0x9b
        ; Exact mapped bytes E9 30 01 00 00: jmp 0x587fdd3a
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B BE 3C 05 01 00: mov edi, dword ptr [esi + 0x1053c]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0x3c
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 2B 79 54: sub edi, dword ptr [ecx + 0x54]
        __asm _emit 0x2b
        __asm _emit 0x79
        __asm _emit 0x54
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 8D 50 07: lea edx, [eax + 7]
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x07
        ; Exact mapped bytes 83 FA 0E: cmp edx, 0xe
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x0e
        ; Exact mapped bytes 77 25: ja 0x587fdc42
        __asm _emit 0x77
        __asm _emit 0x25
        ; Exact mapped bytes 8D 50 03: lea edx, [eax + 3]
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x03
        ; Exact mapped bytes 83 FA 06: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x06
        ; Exact mapped bytes 77 14: ja 0x587fdc39
        __asm _emit 0x77
        __asm _emit 0x14
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 7D 05: jge 0x587fdc2e
        __asm _emit 0x7d
        __asm _emit 0x05
        ; Exact mapped bytes 83 CD FF: or ebp, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xcd
        __asm _emit 0xff
        ; Exact mapped bytes EB 1F: jmp 0x587fdc4d
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 9F C2: setg dl
        __asm _emit 0x0f
        __asm _emit 0x9f
        __asm _emit 0xc2
        ; Exact mapped bytes 8B EA: mov ebp, edx
        __asm _emit 0x8b
        __asm _emit 0xea
        ; Exact mapped bytes EB 14: jmp 0x587fdc4d
        __asm _emit 0xeb
        __asm _emit 0x14
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes D1 FD: sar ebp, 1
        __asm _emit 0xd1
        __asm _emit 0xfd
        ; Exact mapped bytes EB 0B: jmp 0x587fdc4d
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 83 E2 03: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x03
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes C1 FD 02: sar ebp, 2
        __asm _emit 0xc1
        __asm _emit 0xfd
        __asm _emit 0x02
        ; Exact mapped bytes 8D 47 07: lea eax, [edi + 7]
        __asm _emit 0x8d
        __asm _emit 0x47
        __asm _emit 0x07
        ; Exact mapped bytes 83 F8 0E: cmp eax, 0xe
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0e
        ; Exact mapped bytes 77 23: ja 0x587fdc78
        __asm _emit 0x77
        __asm _emit 0x23
        ; Exact mapped bytes 8D 57 03: lea edx, [edi + 3]
        __asm _emit 0x8d
        __asm _emit 0x57
        __asm _emit 0x03
        ; Exact mapped bytes 83 FA 06: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x06
        ; Exact mapped bytes 77 12: ja 0x587fdc6f
        __asm _emit 0x77
        __asm _emit 0x12
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 7D 05: jge 0x587fdc66
        __asm _emit 0x7d
        __asm _emit 0x05
        ; Exact mapped bytes 83 C8 FF: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0xff
        ; Exact mapped bytes EB 1D: jmp 0x587fdc83
        __asm _emit 0xeb
        __asm _emit 0x1d
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 0F 9F C0: setg al
        __asm _emit 0x0f
        __asm _emit 0x9f
        __asm _emit 0xc0
        ; Exact mapped bytes EB 14: jmp 0x587fdc83
        __asm _emit 0xeb
        __asm _emit 0x14
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes D1 F8: sar eax, 1
        __asm _emit 0xd1
        __asm _emit 0xf8
        ; Exact mapped bytes EB 0B: jmp 0x587fdc83
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 83 E2 03: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x03
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes C1 F8 02: sar eax, 2
        __asm _emit 0xc1
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 01 69 50: add dword ptr [ecx + 0x50], ebp
        __asm _emit 0x01
        __asm _emit 0x69
        __asm _emit 0x50
        ; Exact mapped bytes 01 41 54: add dword ptr [ecx + 0x54], eax
        __asm _emit 0x01
        __asm _emit 0x41
        __asm _emit 0x54
        ; Exact mapped bytes 8B 86 24 05 01 00: mov eax, dword ptr [esi + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 50: mov ecx, dword ptr [eax + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x50
        ; Exact mapped bytes 8B 40 54: mov eax, dword ptr [eax + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x54
        ; Exact mapped bytes 89 8E 2C 05 01 00: mov dword ptr [esi + 0x1052c], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x2c
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 30 05 01 00: mov dword ptr [esi + 0x10530], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 94 00 00 00: jmp 0x587fdd3a
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 2C 05 01 00: mov eax, dword ptr [esi + 0x1052c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x2c
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 3B D0: cmp edx, eax
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 75 0B: jne 0x587fdcbb
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 79 54: mov edi, dword ptr [ecx + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x79
        __asm _emit 0x54
        ; Exact mapped bytes 3B BE 30 05 01 00: cmp edi, dword ptr [esi + 0x10530]
        __asm _emit 0x3b
        __asm _emit 0xbe
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 74 7F: je 0x587fdd3a
        __asm _emit 0x74
        __asm _emit 0x7f
        ; Exact mapped bytes 8B BE 30 05 01 00: mov edi, dword ptr [esi + 0x10530]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 2B 79 54: sub edi, dword ptr [ecx + 0x54]
        __asm _emit 0x2b
        __asm _emit 0x79
        __asm _emit 0x54
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 8D 50 07: lea edx, [eax + 7]
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x07
        ; Exact mapped bytes 83 FA 0E: cmp edx, 0xe
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x0e
        ; Exact mapped bytes 77 25: ja 0x587fdcf3
        __asm _emit 0x77
        __asm _emit 0x25
        ; Exact mapped bytes 8D 50 03: lea edx, [eax + 3]
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x03
        ; Exact mapped bytes 83 FA 06: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x06
        ; Exact mapped bytes 77 14: ja 0x587fdcea
        __asm _emit 0x77
        __asm _emit 0x14
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 7D 05: jge 0x587fdcdf
        __asm _emit 0x7d
        __asm _emit 0x05
        ; Exact mapped bytes 83 CD FF: or ebp, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xcd
        __asm _emit 0xff
        ; Exact mapped bytes EB 1F: jmp 0x587fdcfe
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 9F C2: setg dl
        __asm _emit 0x0f
        __asm _emit 0x9f
        __asm _emit 0xc2
        ; Exact mapped bytes 8B EA: mov ebp, edx
        __asm _emit 0x8b
        __asm _emit 0xea
        ; Exact mapped bytes EB 14: jmp 0x587fdcfe
        __asm _emit 0xeb
        __asm _emit 0x14
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes D1 FD: sar ebp, 1
        __asm _emit 0xd1
        __asm _emit 0xfd
        ; Exact mapped bytes EB 0B: jmp 0x587fdcfe
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 83 E2 03: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x03
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes C1 FD 02: sar ebp, 2
        __asm _emit 0xc1
        __asm _emit 0xfd
        __asm _emit 0x02
        ; Exact mapped bytes 8D 47 07: lea eax, [edi + 7]
        __asm _emit 0x8d
        __asm _emit 0x47
        __asm _emit 0x07
        ; Exact mapped bytes 83 F8 0E: cmp eax, 0xe
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0e
        ; Exact mapped bytes 77 23: ja 0x587fdd29
        __asm _emit 0x77
        __asm _emit 0x23
        ; Exact mapped bytes 8D 57 03: lea edx, [edi + 3]
        __asm _emit 0x8d
        __asm _emit 0x57
        __asm _emit 0x03
        ; Exact mapped bytes 83 FA 06: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x06
        ; Exact mapped bytes 77 12: ja 0x587fdd20
        __asm _emit 0x77
        __asm _emit 0x12
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 7D 05: jge 0x587fdd17
        __asm _emit 0x7d
        __asm _emit 0x05
        ; Exact mapped bytes 83 C8 FF: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0xff
        ; Exact mapped bytes EB 1D: jmp 0x587fdd34
        __asm _emit 0xeb
        __asm _emit 0x1d
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 0F 9F C0: setg al
        __asm _emit 0x0f
        __asm _emit 0x9f
        __asm _emit 0xc0
        ; Exact mapped bytes EB 14: jmp 0x587fdd34
        __asm _emit 0xeb
        __asm _emit 0x14
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes D1 F8: sar eax, 1
        __asm _emit 0xd1
        __asm _emit 0xf8
        ; Exact mapped bytes EB 0B: jmp 0x587fdd34
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 83 E2 03: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x03
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes C1 F8 02: sar eax, 2
        __asm _emit 0xc1
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 01 69 50: add dword ptr [ecx + 0x50], ebp
        __asm _emit 0x01
        __asm _emit 0x69
        __asm _emit 0x50
        ; Exact mapped bytes 01 41 54: add dword ptr [ecx + 0x54], eax
        __asm _emit 0x01
        __asm _emit 0x41
        __asm _emit 0x54
        ; Exact mapped bytes 8B 86 24 05 01 00: mov eax, dword ptr [esi + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes B9 46 00 00 00: mov ecx, 0x46
        __asm _emit 0xb9
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 48 50: cmp dword ptr [eax + 0x50], ecx
        __asm _emit 0x39
        __asm _emit 0x48
        __asm _emit 0x50
        ; Exact mapped bytes 7F 09: jg 0x587fdd53
        __asm _emit 0x7f
        __asm _emit 0x09
        ; Exact mapped bytes 89 8E 2C 05 01 00: mov dword ptr [esi + 0x1052c], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x2c
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 48 50: mov dword ptr [eax + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8E 24 05 01 00: mov ecx, dword ptr [esi + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 B0 00 00 00: mov eax, dword ptr [ecx + 0xb0]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F AF 81 A8 00 00 00: imul eax, dword ptr [ecx + 0xa8]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x81
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B 41 50: sub eax, dword ptr [ecx + 0x50]
        __asm _emit 0x2b
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 8B B9 14 01 00 00: mov edi, dword ptr [ecx + 0x114]
        __asm _emit 0x8b
        __asm _emit 0xb9
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B 41 1C: sub eax, dword ptr [ecx + 0x1c]
        __asm _emit 0x2b
        __asm _emit 0x41
        __asm _emit 0x1c
        ; Exact mapped bytes 03 41 14: add eax, dword ptr [ecx + 0x14]
        __asm _emit 0x03
        __asm _emit 0x41
        __asm _emit 0x14
        ; Exact mapped bytes 69 C0 E8 03 00 00: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xc0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FF: idiv edi
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7F 41: jg 0x587fddc3
        __asm _emit 0x7f
        __asm _emit 0x41
        ; Exact mapped bytes 8B 81 B0 00 00 00: mov eax, dword ptr [ecx + 0xb0]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F AF 81 A8 00 00 00: imul eax, dword ptr [ecx + 0xa8]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x81
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B 41 50: sub eax, dword ptr [ecx + 0x50]
        __asm _emit 0x2b
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 2B 41 1C: sub eax, dword ptr [ecx + 0x1c]
        __asm _emit 0x2b
        __asm _emit 0x41
        __asm _emit 0x1c
        ; Exact mapped bytes 03 41 14: add eax, dword ptr [ecx + 0x14]
        __asm _emit 0x03
        __asm _emit 0x41
        __asm _emit 0x14
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7E 27: jle 0x587fddc3
        __asm _emit 0x7e
        __asm _emit 0x27
        ; Exact mapped bytes 8B 41 14: mov eax, dword ptr [ecx + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x14
        ; Exact mapped bytes 2B 41 1C: sub eax, dword ptr [ecx + 0x1c]
        __asm _emit 0x2b
        __asm _emit 0x41
        __asm _emit 0x1c
        ; Exact mapped bytes 69 C0 E8 03 00 00: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xc0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FF: idiv edi
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 91 B0 00 00 00: mov edx, dword ptr [ecx + 0xb0]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F AF 91 A8 00 00 00: imul edx, dword ptr [ecx + 0xa8]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x91
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 89 86 2C 05 01 00: mov dword ptr [esi + 0x1052c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x2c
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 8B 86 24 05 01 00: mov eax, dword ptr [esi + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes BD 20 00 00 00: mov ebp, 0x20
        __asm _emit 0xbd
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 68 54: cmp dword ptr [eax + 0x54], ebp
        __asm _emit 0x39
        __asm _emit 0x68
        __asm _emit 0x54
        ; Exact mapped bytes 7F 09: jg 0x587fdddc
        __asm _emit 0x7f
        __asm _emit 0x09
        ; Exact mapped bytes 89 AE 30 05 01 00: mov dword ptr [esi + 0x10530], ebp
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 68 54: mov dword ptr [eax + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x54
        ; Exact mapped bytes 8B 8E 24 05 01 00: mov ecx, dword ptr [esi + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 B4 00 00 00: mov eax, dword ptr [ecx + 0xb4]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F AF 81 AC 00 00 00: imul eax, dword ptr [ecx + 0xac]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x81
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B 41 54: sub eax, dword ptr [ecx + 0x54]
        __asm _emit 0x2b
        __asm _emit 0x41
        __asm _emit 0x54
        ; Exact mapped bytes 8B B9 14 01 00 00: mov edi, dword ptr [ecx + 0x114]
        __asm _emit 0x8b
        __asm _emit 0xb9
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B 41 20: sub eax, dword ptr [ecx + 0x20]
        __asm _emit 0x2b
        __asm _emit 0x41
        __asm _emit 0x20
        ; Exact mapped bytes 03 41 18: add eax, dword ptr [ecx + 0x18]
        __asm _emit 0x03
        __asm _emit 0x41
        __asm _emit 0x18
        ; Exact mapped bytes 69 C0 E8 03 00 00: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xc0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FF: idiv edi
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7F 41: jg 0x587fde4c
        __asm _emit 0x7f
        __asm _emit 0x41
        ; Exact mapped bytes 8B 81 B4 00 00 00: mov eax, dword ptr [ecx + 0xb4]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F AF 81 AC 00 00 00: imul eax, dword ptr [ecx + 0xac]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x81
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B 41 54: sub eax, dword ptr [ecx + 0x54]
        __asm _emit 0x2b
        __asm _emit 0x41
        __asm _emit 0x54
        ; Exact mapped bytes 2B 41 20: sub eax, dword ptr [ecx + 0x20]
        __asm _emit 0x2b
        __asm _emit 0x41
        __asm _emit 0x20
        ; Exact mapped bytes 03 41 18: add eax, dword ptr [ecx + 0x18]
        __asm _emit 0x03
        __asm _emit 0x41
        __asm _emit 0x18
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7E 27: jle 0x587fde4c
        __asm _emit 0x7e
        __asm _emit 0x27
        ; Exact mapped bytes 8B 41 18: mov eax, dword ptr [ecx + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x18
        ; Exact mapped bytes 2B 41 20: sub eax, dword ptr [ecx + 0x20]
        __asm _emit 0x2b
        __asm _emit 0x41
        __asm _emit 0x20
        ; Exact mapped bytes 69 C0 E8 03 00 00: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xc0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FF: idiv edi
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 91 B4 00 00 00: mov edx, dword ptr [ecx + 0xb4]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F AF 91 AC 00 00 00: imul edx, dword ptr [ecx + 0xac]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x91
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 89 86 30 05 01 00: mov dword ptr [esi + 0x10530], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 54: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes B9 00 1F 00 00: mov ecx, 0x1f00
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        ; Exact mapped bytes BA 00 01 00 00: mov edx, 0x100
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 74 15: je 0x587fde77
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        ; Exact mapped bytes BA 00 04 00 00: mov edx, 0x400
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 85 9B 01 00 00: jne 0x587fe012
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 5C: mov eax, dword ptr [esi + 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x5c
        ; Exact mapped bytes 8B 4E 2C: mov ecx, dword ptr [esi + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x2c
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 74 27: je 0x587fdea8
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 7E 0F: jle 0x587fde92
        __asm _emit 0x7e
        __asm _emit 0x0f
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 2B D1: sub edx, ecx
        __asm _emit 0x2b
        __asm _emit 0xd1
        ; Exact mapped bytes 3B D5: cmp edx, ebp
        __asm _emit 0x3b
        __asm _emit 0xd5
        ; Exact mapped bytes 7F 03: jg 0x587fde8e
        __asm _emit 0x7f
        __asm _emit 0x03
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes EB 13: jmp 0x587fdea1
        __asm _emit 0xeb
        __asm _emit 0x13
        ; Exact mapped bytes 03 CD: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xcd
        ; Exact mapped bytes EB 0E: jmp 0x587fdea0
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 2B D0: sub edx, eax
        __asm _emit 0x2b
        __asm _emit 0xd0
        ; Exact mapped bytes 3B D5: cmp edx, ebp
        __asm _emit 0x3b
        __asm _emit 0xd5
        ; Exact mapped bytes 7F 03: jg 0x587fde9d
        __asm _emit 0x7f
        __asm _emit 0x03
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes EB 04: jmp 0x587fdea1
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 83 C1 E0: add ecx, -0x20
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0xe0
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 78 4E 10 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x4e
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 58: mov eax, dword ptr [esi + 0x58]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4E 28: mov ecx, dword ptr [esi + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x28
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 74 27: je 0x587fded9
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 7E 0F: jle 0x587fdec3
        __asm _emit 0x7e
        __asm _emit 0x0f
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 2B D1: sub edx, ecx
        __asm _emit 0x2b
        __asm _emit 0xd1
        ; Exact mapped bytes 3B D5: cmp edx, ebp
        __asm _emit 0x3b
        __asm _emit 0xd5
        ; Exact mapped bytes 7F 03: jg 0x587fdebf
        __asm _emit 0x7f
        __asm _emit 0x03
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes EB 13: jmp 0x587fded2
        __asm _emit 0xeb
        __asm _emit 0x13
        ; Exact mapped bytes 03 CD: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xcd
        ; Exact mapped bytes EB 0E: jmp 0x587fded1
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 2B D0: sub edx, eax
        __asm _emit 0x2b
        __asm _emit 0xd0
        ; Exact mapped bytes 3B D5: cmp edx, ebp
        __asm _emit 0x3b
        __asm _emit 0xd5
        ; Exact mapped bytes 7F 03: jg 0x587fdece
        __asm _emit 0x7f
        __asm _emit 0x03
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes EB 04: jmp 0x587fded2
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 83 C1 E0: add ecx, -0x20
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0xe0
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 07 4E 10 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x4e
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 58: mov eax, dword ptr [esi + 0x58]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x58
        ; Exact mapped bytes 3B 46 28: cmp eax, dword ptr [esi + 0x28]
        __asm _emit 0x3b
        __asm _emit 0x46
        __asm _emit 0x28
        ; Exact mapped bytes 0F 85 2D 01 00 00: jne 0x587fe012
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 5C: mov ecx, dword ptr [esi + 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x5c
        ; Exact mapped bytes 3B 4E 2C: cmp ecx, dword ptr [esi + 0x2c]
        __asm _emit 0x3b
        __asm _emit 0x4e
        __asm _emit 0x2c
        ; Exact mapped bytes 0F 85 21 01 00 00: jne 0x587fe012
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes B8 00 1F 00 00: mov eax, 0x1f00
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        ; Exact mapped bytes B9 00 01 00 00: mov ecx, 0x100
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B D1: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes 75 20: jne 0x587fdf2b
        __asm _emit 0x75
        __asm _emit 0x20
        ; Exact mapped bytes B8 FF E7 00 00: mov eax, 0xe7ff
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        ; Exact mapped bytes B9 00 07 00 00: mov ecx, 0x700
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes E8 1A 9E FE FF: call 0x587e7d40
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x9e
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 E7 00 00 00: jmp 0x587fe012
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        ; Exact mapped bytes B9 00 04 00 00: mov ecx, 0x400
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B D1: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 0F 85 D6 00 00 00: jne 0x587fe012
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes B8 FF E5 00 00: mov eax, 0xe5ff
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        ; Exact mapped bytes B9 00 05 00 00: mov ecx, 0x500
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes E8 64 36 F3 FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x36
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E 90 0B 01 00: mov ecx, dword ptr [esi + 0x10b90]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x90
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 21: je 0x587fdf87
        __asm _emit 0x74
        __asm _emit 0x21
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D 80 47 A2 58: mov ecx, dword ptr [0x58a24780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3B 8E 90 0B 01 00: cmp ecx, dword ptr [esi + 0x10b90]
        __asm _emit 0x3b
        __asm _emit 0x8e
        __asm _emit 0x90
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 75 06: jne 0x587fdf81
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 89 1D 80 47 A2 58: mov dword ptr [0x58a24780], ebx
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0x80
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 89 9E 90 0B 01 00: mov dword ptr [esi + 0x10b90], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x90
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8D BE F0 18 02 00: lea edi, [esi + 0x218f0]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0xf0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes BD 08 00 00 00: mov ebp, 8
        __asm _emit 0xbd
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 96 5B 0B 00: call 0x588b3b30
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x5b
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 ED 01: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xed
        __asm _emit 0x01
        ; Exact mapped bytes 75 F0: jne 0x587fdf92
        __asm _emit 0x75
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 8E 30 0D 02 00: mov ecx, dword ptr [esi + 0x20d30]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x30
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 89 50 01 00 00: mov ecx, dword ptr [ecx + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 D7 B8 FE FF: call 0x587e98a0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 39 9E 3C 0E 02 00: cmp dword ptr [esi + 0x20e3c], ebx
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0x3c
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 74 13: je 0x587fdfe4
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes 8B 8E 38 0E 02 00: mov ecx, dword ptr [esi + 0x20e38]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x38
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E 3C 0E 02 00: mov dword ptr [esi + 0x20e3c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x3c
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 39 9E 28 1D 02 00: cmp dword ptr [esi + 0x21d28], ebx
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0x28
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 74 19: je 0x587fe005
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 89 50 1C 02 00: mov ecx, dword ptr [ecx + 0x21c50]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 E3 70 FA FF: call 0x587a50e0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x70
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 89 9E 28 1D 02 00: mov dword ptr [esi + 0x21d28], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x28
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x587fe012
        __asm _emit 0xeb
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 0D A4 45 A2 58: mov ecx, dword ptr [0x58a245a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes BA 00 1F 00 00: mov edx, 0x1f00
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes B8 00 07 00 00: mov eax, 0x700
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 75 07: jne 0x587fe02f
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 D1 9D FE FF: call 0x587e7e00
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x9d
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes BA 00 1F 00 00: mov edx, 0x1f00
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes B8 00 02 00 00: mov eax, 0x200
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 85 AD 10 00 00: jne 0x587ff0f6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xad
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 9E E0 18 02 00: cmp dword ptr [esi + 0x218e0], ebx
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0xe0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 74 66: je 0x587fe0b7
        __asm _emit 0x74
        __asm _emit 0x66
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 49 04: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x04
        ; Exact mapped bytes E8 81 86 0D 00: call 0x588d66e0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x86
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 54: je 0x587fe0b7
        __asm _emit 0x74
        __asm _emit 0x54
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 7A 04: mov edi, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x7a
        __asm _emit 0x04
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 6D C9 0D 00: call 0x588da9e0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xc9
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 D6 13 0E 00: call 0x588df450
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x13
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes B8 FB FF 00 00: mov eax, 0xfffb
        __asm _emit 0xb8
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 47 24: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 32 56 05 00: call 0x588536c0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x56
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 8F 50 03 00 00: movzx ecx, word ptr [edi + 0x350]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x8f
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 97 54 03 00 00: movzx edx, byte ptr [edi + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x97
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0C 95 C4 B1 A0 58: mov ecx, dword ptr [edx*4 + 0x58a0b1c4]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x95
        __asm _emit 0xc4
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes E8 27 B8 F8 FF: call 0x587898d0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xb8
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 68 00 00 00 40: push 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 29 41 FF FF: call 0x587f21e0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 39 9E E8 18 02 00: cmp dword ptr [esi + 0x218e8], ebx
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 75 28: jne 0x587fe0e7
        __asm _emit 0x75
        __asm _emit 0x28
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 CA 9A FE FF: call 0x587e7b90
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x9a
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 BE A2 05 01 00 07: cmp word ptr [esi + 0x105a2], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xa2
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        ; Exact mapped bytes 74 0D: je 0x587fe0dd
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 8E 38 0E 02 00: mov ecx, dword ptr [esi + 0x20e38]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x38
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes E8 53 77 07 00: call 0x58875830
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x77
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 E8 18 02 00 01 00 00 00: mov dword ptr [esi + 0x218e8], 1
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 74 04 01 00: mov eax, dword ptr [esi + 0x10474]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 25 00 00 00 F0: and eax, 0xf0000000
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xf0
        ; Exact mapped bytes 3D 00 00 00 10: cmp eax, 0x10000000
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        ; Exact mapped bytes 0F 85 4C 0F 00 00: jne 0x587ff049
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4c
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 86 F0 05 01 00: movzx eax, word ptr [esi + 0x105f0]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes BB 0F 00 00 00: mov ebx, 0xf
        __asm _emit 0xbb
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 04: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 74 29: je 0x587fe138
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 74 23: je 0x587fe138
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 66 83 F8 0A: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0a
        ; Exact mapped bytes 74 1D: je 0x587fe138
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes 66 83 F8 0B: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0b
        ; Exact mapped bytes 74 17: je 0x587fe138
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 66 83 F8 0D: cmp ax, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0d
        ; Exact mapped bytes 74 11: je 0x587fe138
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 66 83 F8 0E: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0e
        ; Exact mapped bytes 74 0B: je 0x587fe138
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 66 3B C3: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 06: je 0x587fe138
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 83 F8 10: cmp ax, 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x10
        ; Exact mapped bytes 75 66: jne 0x587fe19e
        __asm _emit 0x75
        __asm _emit 0x66
        ; Exact mapped bytes 8B 86 68 1C 02 00: mov eax, dword ptr [esi + 0x21c68]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 01: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 76 4F: jbe 0x587fe192
        __asm _emit 0x76
        __asm _emit 0x4f
        ; Exact mapped bytes 8D 48 FF: lea ecx, [eax - 1]
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0xff
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E1: mul ecx
        __asm _emit 0xf7
        __asm _emit 0xe1
        ; Exact mapped bytes 8B FA: mov edi, edx
        __asm _emit 0x8b
        __asm _emit 0xfa
        ; Exact mapped bytes C1 EF 03: shr edi, 3
        __asm _emit 0xc1
        __asm _emit 0xef
        __asm _emit 0x03
        ; Exact mapped bytes B8 89 88 88 88: mov eax, 0x88888889
        __asm _emit 0xb8
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x88
        ; Exact mapped bytes F7 EF: imul edi
        __asm _emit 0xf7
        __asm _emit 0xef
        ; Exact mapped bytes 03 D7: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xd7
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 8B EA: mov ebp, edx
        __asm _emit 0x8b
        __asm _emit 0xea
        ; Exact mapped bytes C1 ED 1F: shr ebp, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xed
        __asm _emit 0x1f
        ; Exact mapped bytes 03 EA: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xea
        ; Exact mapped bytes 89 8E 68 1C 02 00: mov dword ptr [esi + 0x21c68], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 60 1C 02 00: mov ecx, dword ptr [esi + 0x21c60]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x60
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes E8 E9 91 10 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 64 1C 02 00: mov ecx, dword ptr [esi + 0x21c64]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x64
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B C5: mov eax, ebp
        __asm _emit 0x8b
        __asm _emit 0xc5
        ; Exact mapped bytes C1 E0 04: shl eax, 4
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x04
        ; Exact mapped bytes 2B C5: sub eax, ebp
        __asm _emit 0x2b
        __asm _emit 0xc5
        ; Exact mapped bytes 03 C0: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xc0
        ; Exact mapped bytes 03 C0: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xc0
        ; Exact mapped bytes 2B F8: sub edi, eax
        __asm _emit 0x2b
        __asm _emit 0xf8
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 D0 91 10 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x91
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x587fe19e
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 75 0A: jne 0x587fe19e
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes C7 86 68 1C 02 00 00 00 00 00: mov dword ptr [esi + 0x21c68], 0
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE F0 05 01 00 05: cmp word ptr [esi + 0x105f0], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x05
        ; Exact mapped bytes 75 66: jne 0x587fe20e
        __asm _emit 0x75
        __asm _emit 0x66
        ; Exact mapped bytes 8B 86 68 1C 02 00: mov eax, dword ptr [esi + 0x21c68]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 01: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 76 4F: jbe 0x587fe202
        __asm _emit 0x76
        __asm _emit 0x4f
        ; Exact mapped bytes 8D 48 FF: lea ecx, [eax - 1]
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0xff
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E1: mul ecx
        __asm _emit 0xf7
        __asm _emit 0xe1
        ; Exact mapped bytes 8B FA: mov edi, edx
        __asm _emit 0x8b
        __asm _emit 0xfa
        ; Exact mapped bytes C1 EF 03: shr edi, 3
        __asm _emit 0xc1
        __asm _emit 0xef
        __asm _emit 0x03
        ; Exact mapped bytes B8 89 88 88 88: mov eax, 0x88888889
        __asm _emit 0xb8
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x88
        ; Exact mapped bytes F7 EF: imul edi
        __asm _emit 0xf7
        __asm _emit 0xef
        ; Exact mapped bytes 03 D7: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xd7
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 8B EA: mov ebp, edx
        __asm _emit 0x8b
        __asm _emit 0xea
        ; Exact mapped bytes C1 ED 1F: shr ebp, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xed
        __asm _emit 0x1f
        ; Exact mapped bytes 03 EA: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xea
        ; Exact mapped bytes 89 8E 68 1C 02 00: mov dword ptr [esi + 0x21c68], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 60 1C 02 00: mov ecx, dword ptr [esi + 0x21c60]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x60
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes E8 79 91 10 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x91
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes C1 E1 04: shl ecx, 4
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x04
        ; Exact mapped bytes 2B CD: sub ecx, ebp
        __asm _emit 0x2b
        __asm _emit 0xcd
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 2B F9: sub edi, ecx
        __asm _emit 0x2b
        __asm _emit 0xf9
        ; Exact mapped bytes 8B 8E 64 1C 02 00: mov ecx, dword ptr [esi + 0x21c64]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x64
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 60 91 10 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x91
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x587fe20e
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 75 0A: jne 0x587fe20e
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes C7 86 68 1C 02 00 00 00 00 00: mov dword ptr [esi + 0x21c68], 0
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 86 F0 05 01 00: movzx eax, word ptr [esi + 0x105f0]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 03: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 74 06: je 0x587fe221
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes FF 86 E0 04 01 00: inc dword ptr [esi + 0x104e0]
        __asm _emit 0xff
        __asm _emit 0x86
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 75 27: jne 0x587fe24e
        __asm _emit 0x75
        __asm _emit 0x27
        ; Exact mapped bytes 8B 8E 08 1F 02 00: mov ecx, dword ptr [esi + 0x21f08]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x08
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 7E F4 F5 FF: call 0x5875d6b0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xf4
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E 08 1F 02 00: mov ecx, dword ptr [esi + 0x21f08]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x08
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 79 60 00: cmp dword ptr [ecx + 0x60], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x60
        __asm _emit 0x00
        ; Exact mapped bytes 74 10: je 0x587fe24e
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes E8 ED F1 F5 FF: call 0x5875d430
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xf1
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E 08 1F 02 00: mov ecx, dword ptr [esi + 0x21f08]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x08
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 52 F1 F5 FF: call 0x5875d3a0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xf1
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 83 BE C4 18 02 00 00: cmp dword ptr [esi + 0x218c4], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xc4
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0D: jne 0x587fe264
        __asm _emit 0x75
        __asm _emit 0x0d
        ; Exact mapped bytes 66 39 9E F0 05 01 00: cmp word ptr [esi + 0x105f0], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 CF 01 00 00: jne 0x587fe433
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 C5 98 FE FF: call 0x587e7b30
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 66 39 9E F0 05 01 00: cmp word ptr [esi + 0x105f0], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 E7 00 00 00: jne 0x587fe35f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 86 B5 18 02 00: mov al, byte ptr [esi + 0x218b5]
        __asm _emit 0x8a
        __asm _emit 0x86
        __asm _emit 0xb5
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 75 33: jne 0x587fe2b5
        __asm _emit 0x75
        __asm _emit 0x33
        ; Exact mapped bytes 8B 96 4C 1C 02 00: mov edx, dword ptr [esi + 0x21c4c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x4c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8A 10 09 00 00: mov ecx, dword ptr [edx + 0x910]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 80 BA CE 00 00 00 00: cmp byte ptr [edx + 0xce], 0
        __asm _emit 0x80
        __asm _emit 0xba
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0E: jne 0x587fe2a9
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 83 F8 06: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 7C EC: jl 0x587fe290
        __asm _emit 0x7c
        __asm _emit 0xec
        ; Exact mapped bytes E9 B6 00 00 00: jmp 0x587fe35f
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 86 B5 18 02 00 01: mov byte ptr [esi + 0x218b5], 1
        __asm _emit 0xc6
        __asm _emit 0x86
        __asm _emit 0xb5
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes E9 AA 00 00 00: jmp 0x587fe35f
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3C 01: cmp al, 1
        __asm _emit 0x3c
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 A2 00 00 00: jne 0x587fe35f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE B8 18 02 00 00: cmp dword ptr [esi + 0x218b8], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xb8
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 2C C4 98 58: mov edi, dword ptr [0x5898c42c]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x2c
        __asm _emit 0xc4
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 75 08: jne 0x587fe2d4
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 89 86 B8 18 02 00: mov dword ptr [esi + 0x218b8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 2B 86 B8 18 02 00: sub eax, dword ptr [esi + 0x218b8]
        __asm _emit 0x2b
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 0A: cmp eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0a
        ; Exact mapped bytes 73 11: jae 0x587fe2f2
        __asm _emit 0x73
        __asm _emit 0x11
        ; Exact mapped bytes 8B 8E BC 18 02 00: mov ecx, dword ptr [esi + 0x218bc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xbc
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes E8 02 33 F3 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x33
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes EB 62: jmp 0x587fe354
        __asm _emit 0xeb
        __asm _emit 0x62
        ; Exact mapped bytes 3D B8 0B 00 00: cmp eax, 0xbb8
        __asm _emit 0x3d
        __asm _emit 0xb8
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 72 2D: jb 0x587fe326
        __asm _emit 0x72
        __asm _emit 0x2d
        ; Exact mapped bytes 8B 8E BC 18 02 00: mov ecx, dword ptr [esi + 0x218bc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xbc
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 EA 32 F3 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x32
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E C0 18 02 00: mov ecx, dword ptr [esi + 0x218c0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 DD 32 F3 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x32
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes C6 86 B5 18 02 00 00: mov byte ptr [esi + 0x218b5], 0
        __asm _emit 0xc6
        __asm _emit 0x86
        __asm _emit 0xb5
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 B8 18 02 00 00 00 00 00: mov dword ptr [esi + 0x218b8], 0
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 39: jmp 0x587fe35f
        __asm _emit 0xeb
        __asm _emit 0x39
        ; Exact mapped bytes 3D D0 07 00 00: cmp eax, 0x7d0
        __asm _emit 0x3d
        __asm _emit 0xd0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 72 11: jb 0x587fe33e
        __asm _emit 0x72
        __asm _emit 0x11
        ; Exact mapped bytes 8B 8E BC 18 02 00: mov ecx, dword ptr [esi + 0x218bc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xbc
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes E8 B6 32 F3 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x32
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes EB 16: jmp 0x587fe354
        __asm _emit 0xeb
        __asm _emit 0x16
        ; Exact mapped bytes 3D E8 03 00 00: cmp eax, 0x3e8
        __asm _emit 0x3d
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 72 1A: jb 0x587fe35f
        __asm _emit 0x72
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 8E BC 18 02 00: mov ecx, dword ptr [esi + 0x218bc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xbc
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 9E 32 F3 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x32
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E C0 18 02 00: mov ecx, dword ptr [esi + 0x218c0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 91 32 F3 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x32
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 8B 3D F8 47 A2 58: mov edi, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4F 04: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x04
        ; Exact mapped bytes 83 B9 BC 63 00 00 00: cmp dword ptr [ecx + 0x63bc], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0xbc
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 BE 00 00 00: je 0x587fe433
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 BE D9 18 02 00 00: cmp byte ptr [esi + 0x218d9], 0
        __asm _emit 0x80
        __asm _emit 0xbe
        __asm _emit 0xd9
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 B1 00 00 00: je 0x587fe433
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 91 98 13 00 00: lea edx, [ecx + 0x1398]
        __asm _emit 0x8d
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8D 8E 98 00 00 00: lea ecx, [esi + 0x98]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 39 00: cmp dword ptr [ecx], 0
        __asm _emit 0x83
        __asm _emit 0x39
        __asm _emit 0x00
        ; Exact mapped bytes 74 05: je 0x587fe39a
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 83 3A 00: cmp dword ptr [edx], 0
        __asm _emit 0x83
        __asm _emit 0x3a
        __asm _emit 0x00
        ; Exact mapped bytes 75 0C: jne 0x587fe3a6
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 83 C2 10: add edx, 0x10
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x10
        ; Exact mapped bytes 83 F8 08: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x08
        ; Exact mapped bytes 7C EA: jl 0x587fe390
        __asm _emit 0x7c
        __asm _emit 0xea
        ; Exact mapped bytes 83 F8 08: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x08
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x587fe433
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 04: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x04
        ; Exact mapped bytes 05 39 01 00 00: add eax, 0x139
        __asm _emit 0x05
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E0 04: shl eax, 4
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x04
        ; Exact mapped bytes 8B 3C 08: mov edi, dword ptr [eax + ecx]
        __asm _emit 0x8b
        __asm _emit 0x3c
        __asm _emit 0x08
        ; Exact mapped bytes BD 01 00 00 00: mov ebp, 1
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 4A: je 0x587fe410
        __asm _emit 0x74
        __asm _emit 0x4a
        ; Exact mapped bytes 8D 5D 03: lea ebx, [ebp + 3]
        __asm _emit 0x8d
        __asm _emit 0x5d
        __asm _emit 0x03
        ; Exact mapped bytes 8B 57 0C: mov edx, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 20: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8B 4F 0C: mov ecx, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 91 00 05 00 00: mov edx, dword ptr [ecx + 0x500]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4C 24 24: lea ecx, [esp + 0x24]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 4C 1C 02 00: mov ecx, dword ptr [esi + 0x21c4c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x4c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 2C: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes E8 CB 8D F8 FF: call 0x587871c0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x8d
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 15: je 0x587fe40e
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 8B 57 0C: mov edx, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x0c
        ; Exact mapped bytes 66 39 9A 2C 02 00 00: cmp word ptr [edx + 0x22c], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x9a
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7D 09: jge 0x587fe40e
        __asm _emit 0x7d
        __asm _emit 0x09
        ; Exact mapped bytes 8B 7F 08: mov edi, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x7f
        __asm _emit 0x08
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 75 BD: jne 0x587fe3c9
        __asm _emit 0x75
        __asm _emit 0xbd
        ; Exact mapped bytes EB 02: jmp 0x587fe410
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8A 86 D9 18 02 00: mov al, byte ptr [esi + 0x218d9]
        __asm _emit 0x8a
        __asm _emit 0x86
        __asm _emit 0xd9
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 3C 01: cmp al, 1
        __asm _emit 0x3c
        __asm _emit 0x01
        ; Exact mapped bytes 75 08: jne 0x587fe422
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 15: je 0x587fe433
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes EB 0A: jmp 0x587fe42c
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes 3C 02: cmp al, 2
        __asm _emit 0x3c
        __asm _emit 0x02
        ; Exact mapped bytes 75 0D: jne 0x587fe433
        __asm _emit 0x75
        __asm _emit 0x0d
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 75 09: jne 0x587fe433
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 6D E8 FE FF: call 0x587ecca0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D FC 44 A2 58: mov ecx, dword ptr [0x58a244fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes BF 0A 00 00 00: mov edi, 0xa
        __asm _emit 0xbf
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BB FA 00 00 00: mov ebx, 0xfa
        __asm _emit 0xbb
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 BE A4 0B 01 00: cmp dword ptr [esi + 0x10ba4], edi
        __asm _emit 0x39
        __asm _emit 0xbe
        __asm _emit 0xa4
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 D6 00 00 00: jne 0x587fe525
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 AC 0B 01 00: mov eax, dword ptr [esi + 0x10bac]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xac
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes BD 03 00 00 00: mov ebp, 3
        __asm _emit 0xbd
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F7 FD: idiv ebp
        __asm _emit 0xf7
        __asm _emit 0xfd
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 0F 85 C0 00 00 00: jne 0x587fe525
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 84 B8 00 00 00: je 0x587fe525
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 B4 0B 01 00: mov edx, dword ptr [esi + 0x10bb4]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xb4
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 90 0B 01 00: mov ecx, dword ptr [esi + 0x10b90]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x90
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 6B D2 64: imul edx, edx, 0x64
        __asm _emit 0x6b
        __asm _emit 0xd2
        __asm _emit 0x64
        ; Exact mapped bytes 8B 2D D4 48 A2 58: mov ebp, dword ptr [0x58a248d4]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xd4
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 2B EA: sub ebp, edx
        __asm _emit 0x2b
        __asm _emit 0xea
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes BD 01 00 00 00: mov ebp, 1
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 01 AE B4 0B 01 00: add dword ptr [esi + 0x10bb4], ebp
        __asm _emit 0x01
        __asm _emit 0xae
        __asm _emit 0xb4
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE B4 0B 01 00 28: cmp dword ptr [esi + 0x10bb4], 0x28
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xb4
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x28
        ; Exact mapped bytes 0F 85 05 02 00 00: jne 0x587fe6a9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 90 0B 01 00: mov ecx, dword ptr [esi + 0x10b90]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x90
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 A4 0B 01 00 0B 00 00 00: mov dword ptr [esi + 0x10ba4], 0xb
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xa4
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 B4 0B 01 00 00 00 00 00: mov dword ptr [esi + 0x10bb4], 0
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xb4
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 86 A8 0B 01 00: mov eax, dword ptr [esi + 0x10ba8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa8
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 83 E8 14: sub eax, 0x14
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x14
        ; Exact mapped bytes 74 24: je 0x587fe4f4
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 2B C5: sub eax, ebp
        __asm _emit 0x2b
        __asm _emit 0xc5
        ; Exact mapped bytes 74 12: je 0x587fe4e6
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 2B C5: sub eax, ebp
        __asm _emit 0x2b
        __asm _emit 0xc5
        ; Exact mapped bytes 75 1C: jne 0x587fe4f4
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 96 9C 0B 01 00: mov edx, dword ptr [esi + 0x10b9c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x9c
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 96 90 0B 01 00: mov dword ptr [esi + 0x10b90], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x90
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 1A: jmp 0x587fe500
        __asm _emit 0xeb
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 86 98 0B 01 00: mov eax, dword ptr [esi + 0x10b98]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 90 0B 01 00: mov dword ptr [esi + 0x10b90], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x587fe500
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 8E 94 0B 01 00: mov ecx, dword ptr [esi + 0x10b94]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x94
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 8E 90 0B 01 00: mov dword ptr [esi + 0x10b90], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x90
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 90 0B 01 00: mov edx, dword ptr [esi + 0x10b90]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x90
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 15 80 47 A2 58: mov dword ptr [0x58a24780], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8E 90 0B 01 00: mov ecx, dword ptr [esi + 0x10b90]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x90
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 AE AC 0B 01 00: mov dword ptr [esi + 0x10bac], ebp
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0xac
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 84 01 00 00: jmp 0x587fe6a9
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE A0 0B 01 00 00: cmp dword ptr [esi + 0x10ba0], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xa0
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 72 01 00 00: jne 0x587fe6a4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 9E AC 0B 01 00: cmp dword ptr [esi + 0x10bac], ebx
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0xac
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8C 66 01 00 00: jl 0x587fe6a4
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 84 5E 01 00 00: je 0x587fe6a4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 40 04: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 8B 90 64 12 00 00: mov edx, dword ptr [eax + 0x1264]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x64
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 98 0D 00 00: mov ecx, dword ptr [eax + 0xd98]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x98
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 80 98 03 00 00: mov eax, dword ptr [eax + 0x398]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 81 F1 AA AA AA AA: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 3B D1: cmp edx, ecx
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 76 26: jbe 0x587fe59f
        __asm _emit 0x76
        __asm _emit 0x26
        ; Exact mapped bytes BD 01 00 00 00: mov ebp, 1
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE A4 0B 01 00: mov dword ptr [esi + 0x10ba4], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xa4
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 A8 0B 01 00 15 00 00 00: mov dword ptr [esi + 0x10ba8], 0x15
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xa8
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 AE A0 0B 01 00: mov dword ptr [esi + 0x10ba0], ebp
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0xa0
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 AE AC 0B 01 00: mov dword ptr [esi + 0x10bac], ebp
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0xac
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 0A 01 00 00: jmp 0x587fe6a9
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7D 06: jge 0x587fe5b7
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes DC 05 10 CB 98 58: fadd qword ptr [0x5898cb10]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes DD 05 38 D7 98 58: fld qword ptr [0x5898d738]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0xd7
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes DC F9: fdiv st(1), st(0)
        __asm _emit 0xdc
        __asm _emit 0xf9
        ; Exact mapped bytes D9 C9: fxch st(1)
        __asm _emit 0xd9
        __asm _emit 0xc9
        ; Exact mapped bytes D8 DA: fcomp st(2)
        __asm _emit 0xd8
        __asm _emit 0xda
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        ; Exact mapped bytes F6 C4 41: test ah, 0x41
        __asm _emit 0xf6
        __asm _emit 0xc4
        __asm _emit 0x41
        ; Exact mapped bytes 75 56: jne 0x587fe620
        __asm _emit 0x75
        __asm _emit 0x56
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7D 06: jge 0x587fe5de
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes DC 05 10 CB 98 58: fadd qword ptr [0x5898cb10]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8D 04 09: lea eax, [ecx + ecx]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x09
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7D 06: jge 0x587fe5f3
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes DC 05 10 CB 98 58: fadd qword ptr [0x5898cb10]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes D8 F2: fdiv st(2)
        __asm _emit 0xd8
        __asm _emit 0xf2
        ; Exact mapped bytes DE D9: fcompp
        __asm _emit 0xde
        __asm _emit 0xd9
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        ; Exact mapped bytes F6 C4 41: test ah, 0x41
        __asm _emit 0xf6
        __asm _emit 0xc4
        __asm _emit 0x41
        ; Exact mapped bytes 75 22: jne 0x587fe620
        __asm _emit 0x75
        __asm _emit 0x22
        ; Exact mapped bytes 8B 8E 90 0B 01 00: mov ecx, dword ptr [esi + 0x10b90]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x90
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        ; Exact mapped bytes 3B 8E 94 0B 01 00: cmp ecx, dword ptr [esi + 0x10b94]
        __asm _emit 0x3b
        __asm _emit 0x8e
        __asm _emit 0x94
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 83 00 00 00: jne 0x587fe697
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 A8 0B 01 00 16 00 00 00: mov dword ptr [esi + 0x10ba8], 0x16
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xa8
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 67: jmp 0x587fe687
        __asm _emit 0xeb
        __asm _emit 0x67
        ; Exact mapped bytes 8D 04 09: lea eax, [ecx + ecx]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x09
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7D 06: jge 0x587fe635
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes DC 05 10 CB 98 58: fadd qword ptr [0x5898cb10]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes DE F1: fdivrp st(1)
        __asm _emit 0xde
        __asm _emit 0xf1
        ; Exact mapped bytes D8 D1: fcom st(1)
        __asm _emit 0xd8
        __asm _emit 0xd1
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        ; Exact mapped bytes DD D9: fstp st(1)
        __asm _emit 0xdd
        __asm _emit 0xd9
        ; Exact mapped bytes F6 C4 05: test ah, 5
        __asm _emit 0xf6
        __asm _emit 0xc4
        __asm _emit 0x05
        ; Exact mapped bytes 7A 2B: jp 0x587fe66d
        __asm _emit 0x7a
        __asm _emit 0x2b
        ; Exact mapped bytes 89 54 24 14: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 7D 06: jge 0x587fe654
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes DC 05 10 CB 98 58: fadd qword ptr [0x5898cb10]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes DE D9: fcompp
        __asm _emit 0xde
        __asm _emit 0xd9
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        ; Exact mapped bytes F6 C4 05: test ah, 5
        __asm _emit 0xf6
        __asm _emit 0xc4
        __asm _emit 0x05
        ; Exact mapped bytes 7A 12: jp 0x587fe66f
        __asm _emit 0x7a
        __asm _emit 0x12
        ; Exact mapped bytes 8B 8E 90 0B 01 00: mov ecx, dword ptr [esi + 0x10b90]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x90
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 3B 8E 9C 0B 01 00: cmp ecx, dword ptr [esi + 0x10b9c]
        __asm _emit 0x3b
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 75 2C: jne 0x587fe697
        __asm _emit 0x75
        __asm _emit 0x2c
        ; Exact mapped bytes EB 10: jmp 0x587fe67d
        __asm _emit 0xeb
        __asm _emit 0x10
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        ; Exact mapped bytes 8B 96 90 0B 01 00: mov edx, dword ptr [esi + 0x10b90]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x90
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 3B 96 94 0B 01 00: cmp edx, dword ptr [esi + 0x10b94]
        __asm _emit 0x3b
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 74 1A: je 0x587fe697
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes C7 86 A8 0B 01 00 14 00 00 00: mov dword ptr [esi + 0x10ba8], 0x14
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xa8
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE A4 0B 01 00: mov dword ptr [esi + 0x10ba4], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xa4
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 A0 0B 01 00 00 00 00 00: mov dword ptr [esi + 0x10ba0], 0
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xa0
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BD 01 00 00 00: mov ebp, 1
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 AE AC 0B 01 00: mov dword ptr [esi + 0x10bac], ebp
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0xac
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x587fe6a9
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes BD 01 00 00 00: mov ebp, 1
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 9E AC 0B 01 00: cmp dword ptr [esi + 0x10bac], ebx
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0xac
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 7C 06: jl 0x587fe6b7
        __asm _emit 0x7c
        __asm _emit 0x06
        ; Exact mapped bytes 89 AE AC 0B 01 00: mov dword ptr [esi + 0x10bac], ebp
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0xac
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 01 AE AC 0B 01 00: add dword ptr [esi + 0x10bac], ebp
        __asm _emit 0x01
        __asm _emit 0xae
        __asm _emit 0xac
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE B0 0B 01 00 7D: cmp dword ptr [esi + 0x10bb0], 0x7d
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xb0
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x7d
        ; Exact mapped bytes 7C 47: jl 0x587fe70d
        __asm _emit 0x7c
        __asm _emit 0x47
        ; Exact mapped bytes 89 AE B0 0B 01 00: mov dword ptr [esi + 0x10bb0], ebp
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0xb0
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes B8 08 00 00 00: mov eax, 8
        __asm _emit 0xb8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 96 A0 0C 02 00: lea edx, [esi + 0x20ca0]
        __asm _emit 0x8d
        __asm _emit 0x96
        __asm _emit 0xa0
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x587fe6e0
        __asm _emit 0xeb
        __asm _emit 0x07
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587FE6E0 .. +0xA61 bytes.
extern "C" __declspec(naked) void FUN_587fd890_segment_01() {
    __asm {
        ; Exact mapped bytes 8B 8E 9C 0C 02 00: mov ecx, dword ptr [esi + 0x20c9c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0C 08: mov ecx, dword ptr [eax + ecx]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x08
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 13: je 0x587fe700
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes 83 B9 F8 00 00 00 00: cmp dword ptr [ecx + 0xf8], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0A: jne 0x587fe700
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 39 2A: cmp dword ptr [edx], ebp
        __asm _emit 0x39
        __asm _emit 0x2a
        ; Exact mapped bytes 75 06: jne 0x587fe700
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes C7 02 00 00 00 00: mov dword ptr [edx], 0
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C0 04: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x04
        ; Exact mapped bytes 83 C2 04: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x04
        ; Exact mapped bytes 3D 88 00 00 00: cmp eax, 0x88
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 D3: jne 0x587fe6e0
        __asm _emit 0x75
        __asm _emit 0xd3
        ; Exact mapped bytes 8A 86 40 0E 02 00: mov al, byte ptr [esi + 0x20e40]
        __asm _emit 0x8a
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 01 AE B0 0B 01 00: add dword ptr [esi + 0x10bb0], ebp
        __asm _emit 0x01
        __asm _emit 0xae
        __asm _emit 0xb0
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 75 0F: jne 0x587fe72c
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 4C 7F FE FF: call 0x587e6670
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x7f
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes FE 86 40 0E 02 00: inc byte ptr [esi + 0x20e40]
        __asm _emit 0xfe
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 15: jmp 0x587fe741
        __asm _emit 0xeb
        __asm _emit 0x15
        ; Exact mapped bytes 3A C3: cmp al, bl
        __asm _emit 0x3a
        __asm _emit 0xc3
        ; Exact mapped bytes 73 0A: jae 0x587fe73a
        __asm _emit 0x73
        __asm _emit 0x0a
        ; Exact mapped bytes FE C0: inc al
        __asm _emit 0xfe
        __asm _emit 0xc0
        ; Exact mapped bytes 88 86 40 0E 02 00: mov byte ptr [esi + 0x20e40], al
        __asm _emit 0x88
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x587fe741
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes C6 86 40 0E 02 00 00: mov byte ptr [esi + 0x20e40], 0
        __asm _emit 0xc6
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE 28 0E 02 00 00: cmp dword ptr [esi + 0x20e28], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x28
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 07: je 0x587fe751
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 BF C6 FE FF: call 0x587eae10
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xc6
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 83 BE AC 03 00 00 00: cmp dword ptr [esi + 0x3ac], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 07: je 0x587fe761
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 EF CA FE FF: call 0x587eb250
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xca
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 83 BE E0 18 02 00 00: cmp dword ptr [esi + 0x218e0], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xe0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 27: je 0x587fe791
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 8B 86 74 04 01 00: mov eax, dword ptr [esi + 0x10474]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes A9 00 02 00 00: test eax, 0x200
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 1A: jne 0x587fe791
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes 35 00 01 00 00: xor eax, 0x100
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0D 00 02 00 00: or eax, 0x200
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 5C 0D 02 00 00 00 00 00: mov dword ptr [esi + 0x20d5c], 0
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x5c
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 74 04 01 00: mov dword ptr [esi + 0x10474], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 86 F0 05 01 00: movzx eax, word ptr [esi + 0x105f0]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 2D C4 C3 98 58: mov ebp, dword ptr [0x5898c3c4]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 1D 30 C0 98 58: mov ebx, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 F8 04: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 74 39: je 0x587fe7e3
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 74 33: je 0x587fe7e3
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 74 2E: je 0x587fe7e3
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 74 28: je 0x587fe7e3
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 66 83 F8 0B: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0b
        ; Exact mapped bytes 74 22: je 0x587fe7e3
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes 66 83 F8 0D: cmp ax, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0d
        ; Exact mapped bytes 74 1C: je 0x587fe7e3
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 66 83 F8 10: cmp ax, 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x10
        ; Exact mapped bytes 74 16: je 0x587fe7e3
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes 66 83 F8 0C: cmp ax, 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0c
        ; Exact mapped bytes 74 10: je 0x587fe7e3
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 66 83 F8 0E: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0e
        ; Exact mapped bytes 74 0A: je 0x587fe7e3
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 F8 0F: cmp ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0f
        ; Exact mapped bytes 0F 85 A6 02 00 00: jne 0x587fea89
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 BE E0 04 01 00 A6 0E 00 00: cmp dword ptr [esi + 0x104e0], 0xea6
        __asm _emit 0x81
        __asm _emit 0xbe
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0xa6
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8E 96 02 00 00: jle 0x587fea89
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F7 86 74 04 01 00 00 0F 00 00: test dword ptr [esi + 0x10474], 0xf00
        __asm _emit 0xf7
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 86 02 00 00: jne 0x587fea89
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 E4 04 01 00: mov eax, dword ptr [esi + 0x104e4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xe4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 01: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 AA 01 00 00: jne 0x587fe9bc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 E4 04 01 00 00 00 00 00: mov dword ptr [esi + 0x104e4], 0
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xe4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 78 04 01 00: mov dword ptr [esi + 0x10478], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 7A 04: mov edi, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x7a
        __asm _emit 0x04
        ; Exact mapped bytes 83 BF 0C 10 00 00 00: cmp dword ptr [edi + 0x100c], 0
        __asm _emit 0x83
        __asm _emit 0xbf
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 10 01 00 00: je 0x587fe948
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 87 E8 12 00 00: mov eax, dword ptr [edi + 0x12e8]
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8F A0 03 00 00: lea ecx, [edi + 0x3a0]
        __asm _emit 0x8d
        __asm _emit 0x8f
        __asm _emit 0xa0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 68 94 BD 99 58: push 0x5899bd94
        __asm _emit 0x68
        __asm _emit 0x94
        __asm _emit 0xbd
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 94 24 C0 00 00 00: lea edx, [esp + 0xc0]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 83 BF 58 12 00 00 00: cmp dword ptr [edi + 0x1258], 0
        __asm _emit 0x83
        __asm _emit 0xbf
        __asm _emit 0x58
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 15: je 0x587fe87f
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 8B 8E 38 0D 02 00: mov ecx, dword ptr [esi + 0x20d38]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x38
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 FF FF 00: push 0xffff00
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 8D 84 24 B8 00 00 00: lea eax, [esp + 0xb8]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes EB 13: jmp 0x587fe892
        __asm _emit 0xeb
        __asm _emit 0x13
        ; Exact mapped bytes 8D 8C 24 B4 00 00 00: lea ecx, [esp + 0xb4]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FF 00 00: push 0xffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 3C 0D 02 00: mov ecx, dword ptr [esi + 0x20d3c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x3c
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 F9 D4 10 00: call 0x5890bd90
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xd4
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 70 01 00 00 1D: cmp dword ptr [eax + 0x170], 0x1d
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1d
        ; Exact mapped bytes 7E 14: jle 0x587fe8b9
        __asm _emit 0x7e
        __asm _emit 0x14
        ; Exact mapped bytes 83 B8 94 01 00 00 00: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x587fe8b9
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 90 94 01 00 00: mov edx, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4A 74: mov ecx, dword ptr [edx + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x74
        ; Exact mapped bytes EB 02: jmp 0x587fe8bb
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes A1 F8 48 A2 58: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 CA 90 10 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x90
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 70 01 00 00 1D: cmp dword ptr [eax + 0x170], 0x1d
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1d
        ; Exact mapped bytes 7E 14: jle 0x587fe8e8
        __asm _emit 0x7e
        __asm _emit 0x14
        ; Exact mapped bytes 83 B8 94 01 00 00 00: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x587fe8e8
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 88 94 01 00 00: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 49 74: mov ecx, dword ptr [ecx + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x74
        ; Exact mapped bytes EB 02: jmp 0x587fe8ea
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 66 83 BE F0 05 01 00 07: cmp word ptr [esi + 0x105f0], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        ; Exact mapped bytes 75 4B: jne 0x587fe948
        __asm _emit 0x75
        __asm _emit 0x4b
        ; Exact mapped bytes 83 BF 48 66 00 00 00: cmp dword ptr [edi + 0x6648], 0
        __asm _emit 0x83
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0D: je 0x587fe913
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 8E 04 1F 02 00: mov ecx, dword ptr [esi + 0x21f04]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes E8 ED DD FC FF: call 0x587cc700
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xdd
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes C7 87 4C 66 00 00 10 27 00 00: mov dword ptr [edi + 0x664c], 0x2710
        __asm _emit 0xc7
        __asm _emit 0x87
        __asm _emit 0x4c
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3B 79 04: cmp edi, dword ptr [ecx + 4]
        __asm _emit 0x3b
        __asm _emit 0x79
        __asm _emit 0x04
        ; Exact mapped bytes 75 20: jne 0x587fe948
        __asm _emit 0x75
        __asm _emit 0x20
        ; Exact mapped bytes 8B 15 A4 45 A2 58: mov edx, dword ptr [0x58a245a4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes C7 82 D8 08 00 00 01 00 00 00: mov dword ptr [edx + 0x8d8], 1
        __asm _emit 0xc7
        __asm _emit 0x82
        __asm _emit 0xd8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 04 1F 02 00: mov eax, dword ptr [esi + 0x21f04]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C7 80 AC 00 00 00 00 00 00 00: mov dword ptr [eax + 0xac], 0
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 74 04 01 00: mov ecx, dword ptr [esi + 0x10474]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 81 E1 FF FF FF 0F: and ecx, 0xfffffff
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x0f
        ; Exact mapped bytes 81 C9 00 00 00 20: or ecx, 0x20000000
        __asm _emit 0x81
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        ; Exact mapped bytes 89 8E 74 04 01 00: mov dword ptr [esi + 0x10474], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4A 04: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x04
        ; Exact mapped bytes 8B 81 98 03 00 00: mov eax, dword ptr [ecx + 0x398]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 91 74 12 00 00: mov edx, dword ptr [ecx + 0x1274]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x74
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 6C 12 00 00: mov ecx, dword ptr [ecx + 0x126c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 81 F1 AA AA AA AA: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E1: mul ecx
        __asm _emit 0xf7
        __asm _emit 0xe1
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 90 04 01 00: mov edx, dword ptr [esi + 0x10490]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 A9 AD FB FF: call 0x587b9760
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xad
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes E9 C8 00 00 00: jmp 0x587fea84
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 C5 00 00 00: je 0x587fea89
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 48 FF: lea ecx, [eax - 1]
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0xff
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes BF 19 00 00 00: mov edi, 0x19
        __asm _emit 0xbf
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F7 FF: idiv edi
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 89 8E E4 04 01 00: mov dword ptr [esi + 0x104e4], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xe4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 0F 85 A3 00 00 00: jne 0x587fea84
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F9 7D: cmp ecx, 0x7d
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x7d
        ; Exact mapped bytes 7E 12: jle 0x587fe9f8
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes B9 7D 00 00 00: mov ecx, 0x7d
        __asm _emit 0xb9
        __asm _emit 0x7d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 0F 85 8C 00 00 00: jne 0x587fea84
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 68 50 D1 99 58: push 0x5899d150
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xd1
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 94 24 3C 02 00 00: lea edx, [esp + 0x23c]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        ; Exact mapped bytes 8B 8E 38 0D 02 00: mov ecx, dword ptr [esi + 0x20d38]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x38
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 68 00 FF FF 00: push 0xffff00
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 8D 84 24 38 02 00 00: lea eax, [esp + 0x238]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 67 D3 10 00: call 0x5890bd90
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xd3
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes A1 F0 46 A2 58: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 70 01 00 00 00: cmp dword ptr [eax + 0x170], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 13: jle 0x587fea4a
        __asm _emit 0x7e
        __asm _emit 0x13
        ; Exact mapped bytes 83 B8 94 01 00 00 00: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0A: je 0x587fea4a
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 88 94 01 00 00: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 09: mov ecx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x09
        ; Exact mapped bytes EB 02: jmp 0x587fea4c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 38 8F 10 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x8f
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes A1 F0 46 A2 58: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 70 01 00 00 00: cmp dword ptr [eax + 0x170], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 13: jle 0x587fea79
        __asm _emit 0x7e
        __asm _emit 0x13
        ; Exact mapped bytes 83 B8 94 01 00 00 00: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0A: je 0x587fea79
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 80 94 01 00 00: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes EB 02: jmp 0x587fea7b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes BF 0A 00 00 00: mov edi, 0xa
        __asm _emit 0xbf
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 74 04 01 00: mov ecx, dword ptr [esi + 0x10474]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 81 E2 00 0F 00 00: and edx, 0xf00
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 FA 00 01 00 00: cmp edx, 0x100
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 EE 02 00 00: jne 0x587fed91
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xee
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 5C 0D 02 00: mov eax, dword ptr [esi + 0x20d5c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x5c
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 01: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 17 02 00 00: jne 0x587fecc9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 78 04 01 00: mov dword ptr [esi + 0x10478], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 86 F0 05 01 00: movzx eax, word ptr [esi + 0x105f0]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 5C 0D 02 00 00 00 00 00: mov dword ptr [esi + 0x20d5c], 0
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x5c
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 04: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 74 48: je 0x587feb17
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 74 42: je 0x587feb17
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 74 3D: je 0x587feb17
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 74 37: je 0x587feb17
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 66 83 F8 0B: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0b
        ; Exact mapped bytes 74 31: je 0x587feb17
        __asm _emit 0x74
        __asm _emit 0x31
        ; Exact mapped bytes 66 83 F8 0D: cmp ax, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0d
        ; Exact mapped bytes 74 2B: je 0x587feb17
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 66 83 F8 10: cmp ax, 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x10
        ; Exact mapped bytes 74 25: je 0x587feb17
        __asm _emit 0x74
        __asm _emit 0x25
        ; Exact mapped bytes 66 83 F8 0C: cmp ax, 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0c
        ; Exact mapped bytes 74 1F: je 0x587feb17
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes 66 83 F8 0E: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0e
        ; Exact mapped bytes 74 19: je 0x587feb17
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes 66 83 F8 0F: cmp ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0f
        ; Exact mapped bytes 74 13: je 0x587feb17
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes 33 CA: xor ecx, edx
        __asm _emit 0x33
        __asm _emit 0xca
        ; Exact mapped bytes 81 C9 00 02 00 00: or ecx, 0x200
        __asm _emit 0x81
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8E 74 04 01 00: mov dword ptr [esi + 0x10474], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 56 01 00 00: jmp 0x587fec6d
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F1 00 01 00 00: xor ecx, 0x100
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8E 74 04 01 00: mov dword ptr [esi + 0x10474], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 78 04: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x04
        ; Exact mapped bytes 83 BF 0C 10 00 00 00: cmp dword ptr [edi + 0x100c], 0
        __asm _emit 0x83
        __asm _emit 0xbf
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 08 01 00 00: je 0x587fec40
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8F E8 12 00 00: mov ecx, dword ptr [edi + 0x12e8]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 41 6C: mov eax, dword ptr [ecx + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x6c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 97 A0 03 00 00: lea edx, [edi + 0x3a0]
        __asm _emit 0x8d
        __asm _emit 0x97
        __asm _emit 0xa0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 68 40 BE 99 58: push 0x5899be40
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0xbe
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 44 24 40: lea eax, [esp + 0x40]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 83 BF 58 12 00 00 00: cmp dword ptr [edi + 0x1258], 0
        __asm _emit 0x83
        __asm _emit 0xbf
        __asm _emit 0x58
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 12: je 0x587feb79
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 8D 4C 24 34: lea ecx, [esp + 0x34]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 68 00 FF FF 00: push 0xffff00
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 38 0D 02 00: mov ecx, dword ptr [esi + 0x20d38]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x38
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 10: jmp 0x587feb89
        __asm _emit 0xeb
        __asm _emit 0x10
        ; Exact mapped bytes 8B 8E 3C 0D 02 00: mov ecx, dword ptr [esi + 0x20d3c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x3c
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FF 00 00: push 0xffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 54 24 38: lea edx, [esp + 0x38]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 02 D2 10 00: call 0x5890bd90
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xd2
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes BB 1D 00 00 00: mov ebx, 0x1d
        __asm _emit 0xbb
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 98 70 01 00 00: cmp dword ptr [eax + 0x170], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 14: jle 0x587febb4
        __asm _emit 0x7e
        __asm _emit 0x14
        ; Exact mapped bytes 83 B8 94 01 00 00 00: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x587febb4
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 80 94 01 00 00: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 74: mov ecx, dword ptr [eax + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x74
        ; Exact mapped bytes EB 02: jmp 0x587febb6
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 CE 8D 10 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x8d
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 98 70 01 00 00: cmp dword ptr [eax + 0x170], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 14: jle 0x587febe3
        __asm _emit 0x7e
        __asm _emit 0x14
        ; Exact mapped bytes 83 B8 94 01 00 00 00: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x587febe3
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 80 94 01 00 00: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 74: mov ecx, dword ptr [eax + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x74
        ; Exact mapped bytes EB 02: jmp 0x587febe5
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 66 83 BE F0 05 01 00 07: cmp word ptr [esi + 0x105f0], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        ; Exact mapped bytes 75 48: jne 0x587fec40
        __asm _emit 0x75
        __asm _emit 0x48
        ; Exact mapped bytes 83 BF 48 66 00 00 00: cmp dword ptr [edi + 0x6648], 0
        __asm _emit 0x83
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0D: je 0x587fec0e
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 8E 04 1F 02 00: mov ecx, dword ptr [esi + 0x21f04]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes E8 F2 DA FC FF: call 0x587cc700
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xda
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes C7 87 4C 66 00 00 10 27 00 00: mov dword ptr [edi + 0x664c], 0x2710
        __asm _emit 0xc7
        __asm _emit 0x87
        __asm _emit 0x4c
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3B 79 04: cmp edi, dword ptr [ecx + 4]
        __asm _emit 0x3b
        __asm _emit 0x79
        __asm _emit 0x04
        ; Exact mapped bytes 75 1D: jne 0x587fec40
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes 8B 15 A4 45 A2 58: mov edx, dword ptr [0x58a245a4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 82 D8 08 00 00: mov dword ptr [edx + 0x8d8], eax
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0xd8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 04 1F 02 00: mov ecx, dword ptr [esi + 0x21f04]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 81 AC 00 00 00: mov dword ptr [ecx + 0xac], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 74 04 01 00: mov edx, dword ptr [esi + 0x10474]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 81 E2 FF FF FF 0F: and edx, 0xfffffff
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x0f
        ; Exact mapped bytes 81 CA 00 00 00 20: or edx, 0x20000000
        __asm _emit 0x81
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        ; Exact mapped bytes 66 83 BE F0 05 01 00 06: cmp word ptr [esi + 0x105f0], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x06
        ; Exact mapped bytes 89 96 74 04 01 00: mov dword ptr [esi + 0x10474], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 75 0B: jne 0x587fec6d
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 8E 08 1F 02 00: mov ecx, dword ptr [esi + 0x21f08]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x08
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 A3 E0 F5 FF: call 0x5875cd10
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xe0
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 8B 91 98 03 00 00: mov edx, dword ptr [ecx + 0x398]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 91 74 12 00 00: mov edx, dword ptr [ecx + 0x1274]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x74
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 6C 12 00 00: mov ecx, dword ptr [ecx + 0x126c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 81 F1 AA AA AA AA: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E1: mul ecx
        __asm _emit 0xf7
        __asm _emit 0xe1
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 90 04 01 00: mov edx, dword ptr [esi + 0x10490]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 9C AA FB FF: call 0x587b9760
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xaa
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes E9 C8 00 00 00: jmp 0x587fed91
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 C0 00 00 00: je 0x587fed91
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 48 FF: lea ecx, [eax - 1]
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0xff
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes BF 19 00 00 00: mov edi, 0x19
        __asm _emit 0xbf
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F7 FF: idiv edi
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 89 8E 5C 0D 02 00: mov dword ptr [esi + 0x20d5c], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x5c
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 0F 85 A3 00 00 00: jne 0x587fed91
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F9 7D: cmp ecx, 0x7d
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x7d
        ; Exact mapped bytes 7E 12: jle 0x587fed05
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes B9 7D 00 00 00: mov ecx, 0x7d
        __asm _emit 0xb9
        __asm _emit 0x7d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 0F 85 8C 00 00 00: jne 0x587fed91
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 68 2C D1 99 58: push 0x5899d12c
        __asm _emit 0x68
        __asm _emit 0x2c
        __asm _emit 0xd1
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 94 24 3C 03 00 00: lea edx, [esp + 0x33c]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x3c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        ; Exact mapped bytes 8B 8E 38 0D 02 00: mov ecx, dword ptr [esi + 0x20d38]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x38
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 68 00 FF FF 00: push 0xffff00
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 8D 84 24 38 03 00 00: lea eax, [esp + 0x338]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 5A D0 10 00: call 0x5890bd90
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xd0
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes A1 F0 46 A2 58: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 70 01 00 00 00: cmp dword ptr [eax + 0x170], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 13: jle 0x587fed57
        __asm _emit 0x7e
        __asm _emit 0x13
        ; Exact mapped bytes 83 B8 94 01 00 00 00: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0A: je 0x587fed57
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 88 94 01 00 00: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 09: mov ecx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x09
        ; Exact mapped bytes EB 02: jmp 0x587fed59
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 2B 8C 10 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes A1 F0 46 A2 58: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 70 01 00 00 00: cmp dword ptr [eax + 0x170], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 13: jle 0x587fed86
        __asm _emit 0x7e
        __asm _emit 0x13
        ; Exact mapped bytes 83 B8 94 01 00 00 00: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0A: je 0x587fed86
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 80 94 01 00 00: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes EB 02: jmp 0x587fed88
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 86 74 04 01 00: mov eax, dword ptr [esi + 0x10474]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 81 E1 00 0F 00 00: and ecx, 0xf00
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F9 00 04 00 00: cmp ecx, 0x400
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 64: jne 0x587fee0b
        __asm _emit 0x75
        __asm _emit 0x64
        ; Exact mapped bytes 33 C1: xor eax, ecx
        __asm _emit 0x33
        __asm _emit 0xc1
        ; Exact mapped bytes 0D 00 08 00 00: or eax, 0x800
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 74 04 01 00: mov dword ptr [esi + 0x10474], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4A 04: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x04
        ; Exact mapped bytes 8B 81 98 03 00 00: mov eax, dword ptr [ecx + 0x398]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 91 74 12 00 00: mov edx, dword ptr [ecx + 0x1274]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x74
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 6C 12 00 00: mov ecx, dword ptr [ecx + 0x126c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 81 F1 AA AA AA AA: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E1: mul ecx
        __asm _emit 0xf7
        __asm _emit 0xe1
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 90 04 01 00: mov edx, dword ptr [esi + 0x10490]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 55 A9 FB FF: call 0x587b9760
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xa9
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 4E 94 FE FF: call 0x587e8260
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E8 B9 73 FE FF: call 0x587e61d0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x73
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 A2 B8 FE FF: call 0x587ea6c0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 9B 74 FE FF: call 0x587e62c0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 A4 98 FE FF: call 0x587e86d0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 83 BE 88 04 01 00 00: cmp dword ptr [esi + 0x10488], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 E2 01 00 00: jne 0x587ff01b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 AC 04 01 00: mov eax, dword ptr [esi + 0x104ac]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xac
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 3B 86 B0 04 01 00: cmp eax, dword ptr [esi + 0x104b0]
        __asm _emit 0x3b
        __asm _emit 0x86
        __asm _emit 0xb0
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 91 01 00 00: je 0x587fefdc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 10 0C 02 00: mov edx, dword ptr [esi + 0x20c10]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x10
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 49 04: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x04
        ; Exact mapped bytes BF 01 00 00 00: mov edi, 1
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B D7: sub edx, edi
        __asm _emit 0x2b
        __asm _emit 0xd7
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 91 98 03 00 00: mov edx, dword ptr [ecx + 0x398]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 8D 86 11 0C 01 00: lea eax, [esi + 0x10c11]
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0x11
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 91 74 12 00 00: mov edx, dword ptr [ecx + 0x1274]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x74
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 6C 12 00 00: mov ecx, dword ptr [ecx + 0x126c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 81 F1 AA AA AA AA: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E1: mul ecx
        __asm _emit 0xf7
        __asm _emit 0xe1
        ; Exact mapped bytes 8B 86 90 04 01 00: mov eax, dword ptr [esi + 0x10490]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 0F B6 96 10 0C 01 00: movzx edx, byte ptr [esi + 0x10c10]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x96
        __asm _emit 0x10
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 12 A8 FB FF: call 0x587b96d0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xa8
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 0F B7 86 F0 05 01 00: movzx eax, word ptr [esi + 0x105f0]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE 8C 04 01 00: mov dword ptr [esi + 0x1048c], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x8c
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C6 86 10 0C 01 00 00: mov byte ptr [esi + 0x10c10], 0
        __asm _emit 0xc6
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE 10 0C 02 00: mov dword ptr [esi + 0x20c10], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x10
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 08: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x08
        ; Exact mapped bytes 74 0D: je 0x587feeeb
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 66 83 F8 09: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x09
        ; Exact mapped bytes 74 07: je 0x587feeeb
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 55 8A FE FF: call 0x587e7940
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x8a
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 A8 04 01 00: mov eax, dword ptr [esi + 0x104a8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 02: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 0F 8E C8 00 00 00: jle 0x587fefc2
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 0F 8E B6 00 00 00: jle 0x587fefb8
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D A0 C1 98 58: mov edi, dword ptr [0x5898c1a0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa0
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 2D A8 C1 98 58: mov ebp, dword ptr [0x5898c1a8]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 CB FF: or ebx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xcb
        __asm _emit 0xff
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 83 BE A8 04 01 00 04: cmp dword ptr [esi + 0x104a8], 4
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 0F 9E C1: setle cl
        __asm _emit 0x0f
        __asm _emit 0x9e
        __asm _emit 0xc1
        ; Exact mapped bytes 89 0D DC 8E 9C 58: mov dword ptr [0x589c8edc], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 96 A6 FE FF: call 0x587e95c0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xa6
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D 74 45 A2 58 00: cmp dword ptr [0x58a24574], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4B: je 0x587fef7e
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 96 90 04 01 00: mov edx, dword ptr [esi + 0x10490]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 90 04 01 00: mov ecx, dword ptr [eax + 0x10490]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 94 24 3C 01 00 00: lea edx, [esp + 0x13c]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 20 D1 99 58: push 0x5899d120
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0xd1
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 44 24 34: lea eax, [esp + 0x34]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8C 24 3C 01 00 00: lea ecx, [esp + 0x13c]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes A1 D4 B4 A0 58: mov eax, dword ptr [0x58a0b4d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8D 94 24 40 01 00 00: lea edx, [esp + 0x140]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 3B BF FF FF: call 0x587faec0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 0C 0C 01 00: mov eax, dword ptr [esi + 0x10c0c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 88 04 01 00: mov dword ptr [esi + 0x10488], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7E 16: jle 0x587fefab
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 74 C8 FF FF: call 0x587fb810
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 01 9E 88 04 01 00: add dword ptr [esi + 0x10488], ebx
        __asm _emit 0x01
        __asm _emit 0x9e
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE 88 04 01 00 00: cmp dword ptr [esi + 0x10488], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7F EA: jg 0x587fef95
        __asm _emit 0x7f
        __asm _emit 0xea
        ; Exact mapped bytes 83 BE A8 04 01 00 01: cmp dword ptr [esi + 0x104a8], 1
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 0F 8F 59 FF FF FF: jg 0x587fef11
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 05 DC 8E 9C 58 01 00 00 00: mov dword ptr [0x589c8edc], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xdc
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 F7 A5 FE FF: call 0x587e95c0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xa5
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 F0 BE FF FF: call 0x587faec0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E 0C 0C 01 00: mov ecx, dword ptr [esi + 0x10c0c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x0c
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 8E 88 04 01 00: mov dword ptr [esi + 0x10488], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE 84 03 00 00 00: cmp dword ptr [esi + 0x384], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 29: je 0x587ff00e
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes 8B 96 74 04 01 00: mov edx, dword ptr [esi + 0x10474]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 81 E2 FF FF FF 0F: and edx, 0xfffffff
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x0f
        ; Exact mapped bytes 81 CA 00 00 00 80: or edx, 0x80000000
        __asm _emit 0x81
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 89 96 74 04 01 00: mov dword ptr [esi + 0x10474], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 BC CC FF FF: call 0x587fbcc0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 86 84 03 00 00 00 00 00 00: mov dword ptr [esi + 0x384], 0
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE 88 04 01 00 00: cmp dword ptr [esi + 0x10488], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 DB 00 00 00: je 0x587ff0f6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 86 84 04 01 00: movzx eax, byte ptr [esi + 0x10484]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 26 69 FE FF: call 0x587e5950
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x69
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes D1 A6 8C 04 01 00: shl dword ptr [esi + 0x1048c], 1
        __asm _emit 0xd1
        __asm _emit 0xa6
        __asm _emit 0x8c
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes C6 86 84 04 01 00 00: mov byte ptr [esi + 0x10484], 0
        __asm _emit 0xc6
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 D2 C7 FF FF: call 0x587fb810
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF 8E 88 04 01 00: dec dword ptr [esi + 0x10488]
        __asm _emit 0xff
        __asm _emit 0x8e
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 AD 00 00 00: jmp 0x587ff0f6
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3D 00 00 00 20: cmp eax, 0x20000000
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        ; Exact mapped bytes 0F 85 86 00 00 00: jne 0x587ff0da
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 49 04: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x04
        ; Exact mapped bytes 8B 91 98 03 00 00: mov edx, dword ptr [ecx + 0x398]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 91 74 12 00 00: mov edx, dword ptr [ecx + 0x1274]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x74
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 6C 12 00 00: mov ecx, dword ptr [ecx + 0x126c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 81 F1 AA AA AA AA: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E1: mul ecx
        __asm _emit 0xf7
        __asm _emit 0xe1
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 90 04 01 00: mov edx, dword ptr [esi + 0x10490]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 76 A6 FB FF: call 0x587b9720
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xa6
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 8C 04 01 00: mov dword ptr [esi + 0x1048c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 10 0C 02 00: mov dword ptr [esi + 0x20c10], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 74 04 01 00: mov eax, dword ptr [esi + 0x10474]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 25 FF FF FF 0F: and eax, 0xfffffff
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x0f
        ; Exact mapped bytes 0D 00 00 00 80: or eax, 0x80000000
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes C6 86 10 0C 01 00 00: mov byte ptr [esi + 0x10c10], 0
        __asm _emit 0xc6
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 74 04 01 00: mov dword ptr [esi + 0x10474], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 1C: jmp 0x587ff0f6
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes 3D 00 00 00 80: cmp eax, 0x80000000
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 75 15: jne 0x587ff0f6
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes 39 9E 84 03 00 00: cmp dword ptr [esi + 0x384], ebx
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0D: je 0x587ff0f6
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 D0 CB FF FF: call 0x587fbcc0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 9E 84 03 00 00: mov dword ptr [esi + 0x384], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 3C: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x3c
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 1C: je 0x587ff119
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 8B 79 38: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x79
        __asm _emit 0x38
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 0C: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0c
        ; Exact mapped bytes 3B 7E 3C: cmp edi, dword ptr [esi + 0x3c]
        __asm _emit 0x3b
        __asm _emit 0x7e
        __asm _emit 0x3c
        ; Exact mapped bytes 74 0A: je 0x587ff117
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 75 EB: jne 0x587ff100
        __asm _emit 0x75
        __asm _emit 0xeb
        ; Exact mapped bytes EB 02: jmp 0x587ff119
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 8C 24 38 04 00 00: mov ecx, dword ptr [esp + 0x438]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 8B 8C 24 20 04 00 00: mov ecx, dword ptr [esp + 0x420]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 CC: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xcc
        ; Exact mapped bytes E8 A0 DA 17 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xda
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes 81 C4 30 04 00 00: add esp, 0x430
        __asm _emit 0x81
        __asm _emit 0xc4
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
