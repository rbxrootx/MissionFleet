// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005677EE .. +0x66 bytes.
extern "C" __declspec(naked) void _UpdateRegistryAll_COleObjectFactory__SGHH_Z_005677EE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        ; Exact mapped bytes E8 6A 8E FD FF: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x8e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 0
        ; Exact mapped bytes E8 77 B5 FD FF: call 0x542d7a
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xb5
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 24h
        ; Exact mapped bytes E8 C2 F4 FD FF: call 0x546cd0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xf4
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 09: jmp 0x56781c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 20: je 0x567842
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        test eax, eax
        ; Exact mapped bytes 75 0B: jne 0x567840
        __asm _emit 0x75
        __asm _emit 0x0b
        push 0
        ; Exact mapped bytes E8 70 B6 FD FF: call 0x542eac
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xb6
        __asm _emit 0xfd
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 0E: jmp 0x56784e
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes EB D1: jmp 0x567813
        __asm _emit 0xeb
        __asm _emit 0xd1
        push 0
        ; Exact mapped bytes E8 63 B6 FD FF: call 0x542eac
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xb6
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
