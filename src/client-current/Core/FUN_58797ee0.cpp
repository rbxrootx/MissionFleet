// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Returns the first parsed line and advances the collection cursor.
// Indexed function extent: 0x58797EE0 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_58797ee0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 3C 6C D3 FF: call 0x584ceb30
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x6c
        __asm _emit 0xd3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2D: je 0x58797f25
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp - 4]
        add eax, 8
        mov dword ptr [ebp - 8], eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 16 F8 D6 FF: call 0x58507730
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xf8
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1F DE D2 FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xde
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes EB 04: jmp 0x58797f27
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 02: jmp 0x58797f27
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
    }
}
