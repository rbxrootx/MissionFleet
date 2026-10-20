// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041E4CD .. +0xB6 bytes.
extern "C" __declspec(naked) void FUN_0041e4cd_0041E4CD() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 83 EC 34: sub esp, 0x34
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x34
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 83 65 D8 00: and dword ptr [ebp - 0x28], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xd8
        __asm _emit 0x00
        ; Exact mapped bytes C7 45 DC 83 E5 41 00: mov dword ptr [ebp - 0x24], 0x41e583
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xdc
        __asm _emit 0x83
        __asm _emit 0xe5
        __asm _emit 0x41
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 18: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x18
        ; Exact mapped bytes 89 45 E0: mov dword ptr [ebp - 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe0
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 89 45 E4: mov dword ptr [ebp - 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 8B 45 1C: mov eax, dword ptr [ebp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x1c
        ; Exact mapped bytes 89 45 E8: mov dword ptr [ebp - 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 8B 45 20: mov eax, dword ptr [ebp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x20
        ; Exact mapped bytes 89 45 EC: mov dword ptr [ebp - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 83 65 F0 00: and dword ptr [ebp - 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xf0
        __asm _emit 0x00
        ; Exact mapped bytes 83 65 F4 00: and dword ptr [ebp - 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xf4
        __asm _emit 0x00
        ; Exact mapped bytes 83 65 F8 00: and dword ptr [ebp - 8], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xf8
        __asm _emit 0x00
        ; Exact mapped bytes 83 65 FC 00: and dword ptr [ebp - 4], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xfc
        __asm _emit 0x00
        ; Exact mapped bytes C7 45 F0 55 E5 41 00: mov dword ptr [ebp - 0x10], 0x41e555
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xf0
        __asm _emit 0x55
        __asm _emit 0xe5
        __asm _emit 0x41
        __asm _emit 0x00
        ; Exact mapped bytes 89 65 F4: mov dword ptr [ebp - 0xc], esp
        __asm _emit 0x89
        __asm _emit 0x65
        __asm _emit 0xf4
        ; Exact mapped bytes 89 6D F8: mov dword ptr [ebp - 8], ebp
        __asm _emit 0x89
        __asm _emit 0x6d
        __asm _emit 0xf8
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 D8: mov dword ptr [ebp - 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 8D 85 D8 FF FF FF: lea eax, [ebp - 0x28]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 45 CC 01 00 00 00: mov dword ptr [ebp - 0x34], 1
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 89 45 D0: mov dword ptr [ebp - 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 89 45 D4: mov dword ptr [ebp - 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd4
        ; Exact mapped bytes 8D 45 D0: lea eax, [ebp - 0x30]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes FF 30: push dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x30
        ; Exact mapped bytes E8 77 3F 00 00: call 0x4224c3
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 50 68: call dword ptr [eax + 0x68]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x68
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 83 65 CC 00: and dword ptr [ebp - 0x34], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xcc
        __asm _emit 0x00
        ; Exact mapped bytes 83 7D FC 00: cmp dword ptr [ebp - 4], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xfc
        __asm _emit 0x00
        ; Exact mapped bytes 74 17: je 0x41e572
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 64 8B 1D 00 00 00 00: mov ebx, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 03: mov eax, dword ptr [ebx]
        __asm _emit 0x8b
        __asm _emit 0x03
        ; Exact mapped bytes 8B 5D D8: mov ebx, dword ptr [ebp - 0x28]
        __asm _emit 0x8b
        __asm _emit 0x5d
        __asm _emit 0xd8
        ; Exact mapped bytes 89 03: mov dword ptr [ebx], eax
        __asm _emit 0x89
        __asm _emit 0x03
        ; Exact mapped bytes 64 89 1D 00 00 00 00: mov dword ptr fs:[0], ebx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x41e57b
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 45 D8: mov eax, dword ptr [ebp - 0x28]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 CC: mov eax, dword ptr [ebp - 0x34]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xcc
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C9: leave
        __asm _emit 0xc9
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
