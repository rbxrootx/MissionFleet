// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044BFB8 .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_0044bfb8_0044BFB8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 4], 31h
        mov dword ptr [ebp - 8], 0
        lea eax, [ebp - 4]
        push eax
        lea ecx, [ebp - 8]
        push ecx
        lea edx, [ebp + 8]
        push edx
        ; Exact mapped bytes E8 9B 9E FC FF: call 0x415e90
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x9e
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x44c000
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x44c005
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 D1 C7 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
