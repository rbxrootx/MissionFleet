// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004207D0 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_004207d0_004207D0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 83 EC 4C: sub esp, 0x4c
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x4c
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 7D B4: lea edi, [ebp - 0x4c]
        __asm _emit 0x8d
        __asm _emit 0x7d
        __asm _emit 0xb4
        ; Exact mapped bytes B9 13 00 00 00: mov ecx, 0x13
        __asm _emit 0xb9
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 CC CC CC CC: mov eax, 0xcccccccc
        __asm _emit 0xb8
        __asm _emit 0xcc
        __asm _emit 0xcc
        __asm _emit 0xcc
        __asm _emit 0xcc
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 89 4D FC: mov dword ptr [ebp - 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4D F4: lea ecx, [ebp - 0xc]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes E8 15 09 FE FF: call 0x40110e
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x09
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes E8 18 08 FE FF: call 0x401019
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x08
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8D 4D F4: lea ecx, [ebp - 0xc]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes E8 01 09 FE FF: call 0x40110e
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x09
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 4C: add esp, 0x4c
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x4c
        ; Exact mapped bytes 3B EC: cmp ebp, esp
        __asm _emit 0x3b
        __asm _emit 0xec
        ; Exact mapped bytes E8 D3 45 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x45
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
