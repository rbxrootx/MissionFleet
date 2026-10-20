// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878E820 .. +0xC3 bytes.
extern "C" __declspec(naked) void FUN_5878e820_5878E820() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AD 1F 00 00: call 0x587907e0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a8h]
        ; Exact mapped bytes E8 CF 5B F9 FF: call 0x58724410
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x5b
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0a8h]
        ; Exact mapped bytes E8 51 66 F9 FF: call 0x58724ea0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x66
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 0ch], eax
        push 0c8h
        push 130h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B3 6D 02 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x6d
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0a8h]
        ; Exact mapped bytes E8 B5 96 CF FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x96
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a8h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 0a8h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8ch]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 08: je 0x5878e8af
        __asm _emit 0x74
        __asm _emit 0x08
        cmp dword ptr [ebp - 8], 1
        ; Exact mapped bytes 74 1B: je 0x5878e8c8
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes EB 30: jmp 0x5878e8df
        __asm _emit 0xeb
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 10h], ecx
        push 0ch
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2B 1E 00 00: call 0x587906f0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 17: jmp 0x5878e8df
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 14h], eax
        push 0ah
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 12 1E 00 00: call 0x587906f0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
