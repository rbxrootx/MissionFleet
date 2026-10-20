// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00476B80 .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_00476b80_00476B80() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 83 EC 1C: sub esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x1c
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes C7 45 E8 00 00 00 80: mov dword ptr [ebp - 0x18], 0x80000000
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes C7 45 EC FF FF 47 41: mov dword ptr [ebp - 0x14], 0x4147ffff
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x47
        __asm _emit 0x41
        ; Exact mapped bytes C7 45 F8 00 00 00 C0: mov dword ptr [ebp - 8], 0xc0000000
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xc0
        ; Exact mapped bytes C7 45 FC 7E 01 50 41: mov dword ptr [ebp - 4], 0x4150017e
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x50
        __asm _emit 0x41
        ; Exact mapped bytes DD 45 F8: fld qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes DC 75 E8: fdiv qword ptr [ebp - 0x18]
        __asm _emit 0xdc
        __asm _emit 0x75
        __asm _emit 0xe8
        ; Exact mapped bytes DC 4D E8: fmul qword ptr [ebp - 0x18]
        __asm _emit 0xdc
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes DC 6D F8: fsubr qword ptr [ebp - 8]
        __asm _emit 0xdc
        __asm _emit 0x6d
        __asm _emit 0xf8
        ; Exact mapped bytes DD 5D F0: fstp qword ptr [ebp - 0x10]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf0
        ; Exact mapped bytes DD 45 F0: fld qword ptr [ebp - 0x10]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes DC 1D E0 EC 63 00: fcomp qword ptr [0x63ece0]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0xe0
        __asm _emit 0xec
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        ; Exact mapped bytes F6 C4 41: test ah, 0x41
        __asm _emit 0xf6
        __asm _emit 0xc4
        __asm _emit 0x41
        ; Exact mapped bytes 75 09: jne 0x476bcd
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes C7 45 E4 01 00 00 00: mov dword ptr [ebp - 0x1c], 1
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x476bd4
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes C7 45 E4 00 00 00 00: mov dword ptr [ebp - 0x1c], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 E4: mov eax, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
