// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A139C .. +0x78 bytes.
extern "C" __declspec(naked) void FUN_004a139c_004A139C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 83 B9 0A 00: call 0x54cd33
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4a13c8
        __asm _emit 0x74
        __asm _emit 0x14
        push 8d4h
        push 5cbe8ch
        ; Exact mapped bytes E8 3D 36 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x36
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a13c8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x4a13a8
        __asm _emit 0x75
        __asm _emit 0xda
        lea ecx, [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [edx]
        push ecx
        ; Exact mapped bytes E8 CF 07 01 00: call 0x4b1bb0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes DD 55 F8: fst qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x55
        __asm _emit 0xf8
        ; Exact mapped bytes DC 05 D8 7E 58 00: fadd qword ptr [0x587ed8]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0xd8
        __asm _emit 0x7e
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DC 0D D0 7E 58 00: fmul qword ptr [0x587ed0]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x7e
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 04 81 00 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 18h
        ; Exact mapped bytes 7C 09: jl 0x4a140a
        __asm _emit 0x7c
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        sub edx, 18h
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
