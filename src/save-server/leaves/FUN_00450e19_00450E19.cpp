// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00450E19 .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_00450e19_00450E19() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov eax, dword ptr [ebp + 8]
        sub eax, 0bch
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 95 13 0E 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x13
        __asm _emit 0x0e
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 88 15 0E 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x15
        __asm _emit 0x0e
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 1ch]
        mov ecx, dword ptr [edx + 1ch]
        ; Exact mapped bytes E8 12 AD 0D 00: call 0x52bb5b
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xad
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 D1 13 0E 00: call 0x532226
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x13
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 2ch
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 0ch], eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 48 15 0E 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x15
        __asm _emit 0x0e
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 2ch
        ; Exact mapped bytes E8 3C 15 0E 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x15
        __asm _emit 0x0e
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 50h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 50h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 1C: call dword ptr [eax + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x1c
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
