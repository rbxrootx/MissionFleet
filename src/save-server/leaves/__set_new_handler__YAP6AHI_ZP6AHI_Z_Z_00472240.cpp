// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00472240 .. +0x30 bytes.
extern "C" __declspec(naked) void __set_new_handler__YAP6AHI_ZP6AHI_Z_Z_00472240() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push 9
        ; Exact mapped bytes E8 65 E6 FF FF: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes A1 38 74 68 00: mov eax, dword ptr [0x687438]
        __asm _emit 0xa1
        __asm _emit 0x38
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 89 0D 38 74 68 00: mov dword ptr [0x687438], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        push 9
        ; Exact mapped bytes E8 EA E6 FF FF: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
