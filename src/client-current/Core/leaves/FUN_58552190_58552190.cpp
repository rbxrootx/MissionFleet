// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58552190 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_58552190_58552190() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 14ch]
        add eax, 1
        cdq
        mov ecx, 3
        idiv ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 14ch], edx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 14ch], 0
        ; Exact mapped bytes 74 0B: je 0x585521cb
        __asm _emit 0x74
        __asm _emit 0x0b
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 66 FF FF FF: call 0x58552130
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
