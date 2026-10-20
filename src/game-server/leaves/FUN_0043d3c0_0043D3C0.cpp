// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043D3C0 .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_0043d3c0_0043D3C0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8A 8A FD FF: call 0x415e60
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x8a
        __asm _emit 0xfd
        __asm _emit 0xff
        push 43d410h
        push 20h
        push 0d4h
        mov eax, dword ptr [ebp - 4]
        add eax, 0d8h
        push eax
        ; Exact mapped bytes E8 50 00 00 00: call 0x43d440
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1b58h
        ; Exact mapped bytes E8 82 00 00 00: call 0x43d480
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 D5 B3 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xb3
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
