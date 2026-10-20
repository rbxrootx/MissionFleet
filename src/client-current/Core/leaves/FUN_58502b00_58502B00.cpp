// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58502B00 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_58502b00_58502B00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 69 CF FC FF: call 0x584cfa80
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xcf
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x58502b2f
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 87 47 F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x47
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
