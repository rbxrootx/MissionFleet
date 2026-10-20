// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58846B01 .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_58846b01_58846B01() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 82 FD FF FF: call 0x58846894
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 73 54: jae 0x58846b6b
        __asm _emit 0x73
        __asm _emit 0x54
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 0ch], 3fffffffh
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 24h]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 73 0A: jae 0x58846b60
        __asm _emit 0x73
        __asm _emit 0x0a
        push 588c1dfch
        ; Exact mapped bytes E8 2D 7C FE FF: call 0x5882e78d
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x7c
        __asm _emit 0xfe
        __asm _emit 0xff
        push dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 95 F5 FF FF: call 0x58846100
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
