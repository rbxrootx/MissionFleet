// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F784F .. +0x4F bytes.
extern "C" __declspec(naked) void FID_conflict__DDX_Text__YGXPAVCDataExchange__HAAI_Z_004F784F() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 20: je 0x4f787a
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        push 0f117h
        push 672fc8h
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 31 FE FF FF: call 0x4f76a6
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        ; Exact mapped bytes EB 20: jmp 0x4f789a
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        push edx
        push 0f117h
        push 672fcch
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 0F FE FF FF: call 0x4f76a6
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
