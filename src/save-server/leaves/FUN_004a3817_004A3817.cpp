// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A3817 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_004a3817_004A3817() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 89h
        push 6749f4h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 2F 6A 03 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x6a
        __asm _emit 0x03
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E0 0B 03 00: call 0x4d441b
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x0b
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4a3853
        __asm _emit 0x75
        __asm _emit 0x14
        push 674a7ch
        push 674aach
        ; Exact mapped bytes E8 C7 CD FF FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 08: jmp 0x4a385b
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 47 BF 02 00: call 0x4cf7a2
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xbf
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
