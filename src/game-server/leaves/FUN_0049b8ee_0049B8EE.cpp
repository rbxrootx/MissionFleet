// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049B8EE .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_0049b8ee_0049B8EE() {
    __asm {
        push ebp
        mov ebp, esp
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 A4 FF FF FF: call 0x49b8a0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 8
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x49b914
        __asm _emit 0x74
        __asm _emit 0x11
        push -1
        push 0
        push 0b1h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C5 02 0A 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x02
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5F 3B 05 00: call 0x4ef47b
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x00
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
