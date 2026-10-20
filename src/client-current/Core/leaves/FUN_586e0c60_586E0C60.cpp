// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E0C60 .. +0xDF bytes.
extern "C" __declspec(naked) void FUN_586e0c60_586E0C60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 408h], ecx
        mov eax, dword ptr [ebp - 408h]
        mov dword ptr [eax + 0bch], 5
        mov ecx, dword ptr [ebp - 408h]
        mov dword ptr [ecx + 0b8h], 2
        push 0
        push 2
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E8 47 F0 FF: call 0x585e5490
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xf0
        __asm _emit 0xff
        push 5
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB 46 F0 FF: call 0x585e5390
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x46
        __asm _emit 0xf0
        __asm _emit 0xff
        push 400h
        push 0
        lea edx, [ebp - 404h]
        push edx
        ; Exact mapped bytes E8 48 C1 16 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xc1
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        push eax
        push 588b2710h
        ; Exact mapped bytes E8 17 13 E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x13
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        push eax
        push 400h
        lea ecx, [ebp - 404h]
        push ecx
        ; Exact mapped bytes E8 02 01 DD FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0xdd
        __asm _emit 0xff
        add esp, 10h
        mov edx, dword ptr [ebp - 408h]
        mov eax, dword ptr [edx + 154h]
        mov dword ptr [ebp - 40ch], eax
        lea ecx, [ebp - 404h]
        push ecx
        mov ecx, dword ptr [ebp - 40ch]
        ; Exact mapped bytes E8 6B BA E0 FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xba
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        push edx
        push 18h
        mov eax, dword ptr [ebp - 408h]
        add eax, 0c0h
        push eax
        ; Exact mapped bytes E8 54 34 0D 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x34
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 17 03 15 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x03
        __asm _emit 0x15
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
