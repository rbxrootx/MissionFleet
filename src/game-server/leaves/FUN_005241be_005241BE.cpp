// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005241BE .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_005241be_005241BE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        push eax
        push 584cc8h
        ; Exact mapped bytes E8 2E 6F FD FF: call 0x4fb103
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x6f
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0A: je 0x5241eb
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        add eax, 88h
        ; Exact mapped bytes EB 06: jmp 0x5241f1
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 8]
        add eax, 3ch
        mov esp, ebp
        pop ebp
        ret
    }
}
