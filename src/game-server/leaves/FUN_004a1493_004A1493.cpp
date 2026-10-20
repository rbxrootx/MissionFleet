// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A1493 .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_004a1493_004A1493() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 8C B8 0A 00: call 0x54cd33
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xb8
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4a14bf
        __asm _emit 0x74
        __asm _emit 0x14
        push 8f4h
        push 5cbe8ch
        ; Exact mapped bytes E8 46 35 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x35
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a14bf
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x4a149f
        __asm _emit 0x75
        __asm _emit 0xda
        lea ecx, [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes DD 02: fld qword ptr [edx]
        __asm _emit 0xdd
        __asm _emit 0x02
        ; Exact mapped bytes DC 0D D0 7E 58 00: fmul qword ptr [0x587ed0]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x7e
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DC 0D E0 7E 58 00: fmul qword ptr [0x587ee0]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x7e
        __asm _emit 0x58
        __asm _emit 0x00
        sub esp, 8
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes E8 CB 06 01 00: call 0x4b1bb0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x06
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
        ; Exact mapped bytes DC 0D E0 7E 58 00: fmul qword ptr [0x587ee0]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x7e
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 00 80 00 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 3ch
        ; Exact mapped bytes 7C 09: jl 0x4a150e
        __asm _emit 0x7c
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        sub eax, 3ch
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
