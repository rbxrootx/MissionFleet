// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046C130 .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_0046c130_0046C130() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57bc19h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push esi
        mov dword ptr [ebp - 10h], 0cccccccch
        mov dword ptr [ebp - 10h], ecx
        push -1
        push -1
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 68 09 02 00: call 0x48cad0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 0ffffh
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1a4h
        ; Exact mapped bytes E8 0E 4D FA FF: call 0x410e90
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x4d
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 581c78h
        mov esi, esp
        push 5bb0d8h
        mov edx, dword ptr [ebp - 10h]
        add edx, 6ch
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 3A C6 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xc6
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 1B C6 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xc6
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
