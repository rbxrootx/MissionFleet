// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00410E90 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_00410e90_00410E90() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 83 EC 44: sub esp, 0x44
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x44
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 7D BC: lea edi, [ebp - 0x44]
        __asm _emit 0x8d
        __asm _emit 0x7d
        __asm _emit 0xbc
        ; Exact mapped bytes B9 11 00 00 00: mov ecx, 0x11
        __asm _emit 0xb9
        __asm _emit 0x11
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
        ; Exact mapped bytes 8B 48 5C: mov ecx, dword ptr [eax + 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x5c
        ; Exact mapped bytes 8B 91 7C 0C 04 00: mov edx, dword ptr [ecx + 0x40c7c]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x7c
        __asm _emit 0x0c
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8A 4C 01 00 00: mov ecx, dword ptr [edx + 0x14c]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 FB 4B 0B 00: call 0x4c5abf
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x4b
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 48 5C: mov ecx, dword ptr [eax + 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x5c
        ; Exact mapped bytes 8B 91 7C 0C 04 00: mov edx, dword ptr [ecx + 0x40c7c]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x7c
        __asm _emit 0x0c
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes C7 82 54 01 00 00 00 00 00 00: mov dword ptr [edx + 0x154], 0
        __asm _emit 0xc7
        __asm _emit 0x82
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 44: add esp, 0x44
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x44
        ; Exact mapped bytes 3B EC: cmp ebp, esp
        __asm _emit 0x3b
        __asm _emit 0xec
        ; Exact mapped bytes E8 09 3F 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x3f
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
