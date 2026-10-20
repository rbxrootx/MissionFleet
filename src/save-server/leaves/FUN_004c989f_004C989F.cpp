// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C989F .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_004c989f_004C989F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        push 0d0h
        push 674970h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 A5 09 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 09 FF FF FF: call 0x4c97d4
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 04: jne 0x4c98d8
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 15: jmp 0x4c98ed
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 C7 B4 05 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xb4
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], eax
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
