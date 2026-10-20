// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00474A0B .. +0xBC bytes.
extern "C" __declspec(naked) void FUN_00474a0b_00474A0B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 20h], ecx
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 4
        ; Exact mapped bytes E8 20 5A FA FF: call 0x41a460
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x5a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        lea edx, [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 4
        ; Exact mapped bytes E8 4C 5A FA FF: call 0x41a4a0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x5a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 4], eax
        lea ecx, [ebp - 4]
        push ecx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 5B 5D FA FF: call 0x41a7c0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x5d
        __asm _emit 0xfa
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x474ab4
        __asm _emit 0x74
        __asm _emit 0x46
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 9A 5C FA FF: call 0x41a710
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x5c
        __asm _emit 0xfa
        __asm _emit 0xff
        add eax, 4
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 19: je 0x474aa4
        __asm _emit 0x74
        __asm _emit 0x19
        push 24h
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 168h]
        add edx, 54h
        push edx
        ; Exact mapped bytes E8 CF 48 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 0
        lea eax, [ebp - 1ch]
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 8E 5C FA FF: call 0x41a740
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x5c
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB A5: jmp 0x474a59
        __asm _emit 0xeb
        __asm _emit 0xa5
        mov eax, 1
        add esp, 20h
        cmp ebp, esp
        ; Exact mapped bytes E8 1D 3D 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x3d
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
