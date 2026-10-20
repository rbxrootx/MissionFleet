// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054C46E .. +0x31 bytes.
extern "C" __declspec(naked) void _GetControllingUnknown_CCmdTarget__QAEPAUIUnknown__XZ_0054C46E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 74 08: je 0x54c488
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + 8]
        ; Exact mapped bytes EB 13: jmp 0x54c49b
        __asm _emit 0xeb
        __asm _emit 0x13
        push 58e540h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9F FB FF FF: call 0x54c034
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
