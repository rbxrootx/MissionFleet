// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587CA350 .. +0x9D bytes.
extern "C" __declspec(naked) void FUN_587ca350() {
    __asm {
        cmp dword ptr [ecx + 0cch], 0
        mov dword ptr [ecx + 214h], 3
        mov dword ptr [ecx + 0b4h], 0
        ; Exact mapped bytes 7C 0A: jl 0x587ca377
        __asm _emit 0x7c
        __asm _emit 0x0a
        mov dword ptr [ecx + 0cch], 0ffffff6ah
        mov ecx, dword ptr [ecx + 2b8h]
        ; Exact mapped bytes 66 83 49 24 0F: or word ptr [ecx + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x0f
        ; Exact mapped bytes A1 D0 48 A2 58: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], 23h
        ; Exact mapped bytes 7E 17: jle 0x587ca3a7
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0E: je 0x587ca3a7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 8ch]
        ; Exact mapped bytes EB 02: jmp 0x587ca3a9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 FC 48 A2 58: mov edx, dword ptr [0x58a248fc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 DB D5 13 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xd5
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes A1 D0 48 A2 58: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], 23h
        ; Exact mapped bytes 7E 1F: jle 0x587ca3e2
        __asm _emit 0x7e
        __asm _emit 0x1f
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 16: je 0x587ca3e2
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 8ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ret
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push ecx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ret
    }
}
