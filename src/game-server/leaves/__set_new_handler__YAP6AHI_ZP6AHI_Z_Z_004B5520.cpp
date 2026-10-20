// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B5520 .. +0x30 bytes.
extern "C" __declspec(naked) void __set_new_handler__YAP6AHI_ZP6AHI_Z_Z_004B5520() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push 9
        ; Exact mapped bytes E8 C5 FC FF FF: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes A1 0C EE 5D 00: mov eax, dword ptr [0x5dee0c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 89 0D 0C EE 5D 00: mov dword ptr [0x5dee0c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        push 9
        ; Exact mapped bytes E8 4A FD FF FF: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
