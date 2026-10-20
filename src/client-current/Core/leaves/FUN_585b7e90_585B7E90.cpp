// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B7E90 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_585b7e90_585B7E90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 75 1B: jne 0x585b7eba
        __asm _emit 0x75
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 344h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A9 ED EC FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xed
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 39: jmp 0x585b7ef3
        __asm _emit 0xeb
        __asm _emit 0x39
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 244h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 8A ED EC FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xed
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 2c4h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 6E ED EC FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xed
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
