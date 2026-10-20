// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00464DF0 .. +0x38 bytes.
extern "C" __declspec(naked) void __chkesp_00464DF0() {
    __asm {
        ; Exact mapped bytes 75 01: jne 0x464df3
        __asm _emit 0x75
        __asm _emit 0x01
        ret
        push ebp
        mov ebp, esp
        sub esp, 0
        push eax
        push edx
        push ebx
        push esi
        push edi
        push 63dff0h
        push 63315ch
        push 2ah
        push 63dfe0h
        push 1
        ; Exact mapped bytes E8 4A 80 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x464e1f
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        pop edi
        pop esi
        pop ebx
        pop edx
        pop eax
        mov esp, ebp
        pop ebp
        ret
    }
}
