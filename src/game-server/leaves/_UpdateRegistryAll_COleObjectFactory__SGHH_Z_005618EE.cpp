// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005618EE .. +0x66 bytes.
extern "C" __declspec(naked) void _UpdateRegistryAll_COleObjectFactory__SGHH_Z_005618EE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        ; Exact mapped bytes E8 4A 3B FE FF: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x3b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 0
        ; Exact mapped bytes E8 D7 63 FE FF: call 0x547cda
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x63
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 24h
        ; Exact mapped bytes E8 A2 A0 FE FF: call 0x54b9b0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 09: jmp 0x56191c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 20: je 0x561942
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
        ; Exact mapped bytes 75 0B: jne 0x561940
        __asm _emit 0x75
        __asm _emit 0x0b
        push 0
        ; Exact mapped bytes E8 D0 64 FE FF: call 0x547e0c
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 0E: jmp 0x56194e
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes EB D1: jmp 0x561913
        __asm _emit 0xeb
        __asm _emit 0xd1
        push 0
        ; Exact mapped bytes E8 C3 64 FE FF: call 0x547e0c
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x64
        __asm _emit 0xfe
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
