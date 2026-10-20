// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050E4FF .. +0x81 bytes.
extern "C" __declspec(naked) void FUN_0050e4ff_0050E4FF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 10h]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 74 47: je 0x50e55c
        __asm _emit 0x74
        __asm _emit 0x47
        lea eax, [ebp - 4]
        push eax
        push 0f116h
        push 5c6980h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 46 FF FF FF: call 0x50e476
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        cmp dword ptr [ebp - 4], 0ffh
        ; Exact mapped bytes 7E 16: jle 0x50e552
        __asm _emit 0x7e
        __asm _emit 0x16
        push -1
        push 0
        push 0f116h
        ; Exact mapped bytes E8 7F F3 FF FF: call 0x50d8c9
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6D FC FF FF: call 0x50e1bf
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 10h]
        mov cl, byte ptr [ebp - 4]
        mov byte ptr [eax], cl
        ; Exact mapped bytes EB 1E: jmp 0x50e57a
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 4]
        push edx
        push 0f116h
        push 5c6984h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 FF FE FF FF: call 0x50e476
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
