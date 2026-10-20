// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886899C .. +0xCD bytes.
extern "C" __declspec(naked) void FUN_5886899c_5886899C() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        sub esp, 10h
        mov ecx, dword ptr [eax]
        cmp ecx, 588c4be0h
        ; Exact mapped bytes 74 0A: je 0x588689bb
        __asm _emit 0x74
        __asm _emit 0x0a
        push ecx
        ; Exact mapped bytes E8 59 42 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        pop ecx
        push dword ptr [eax + 3ch]
        ; Exact mapped bytes E8 4D 42 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push dword ptr [eax + 30h]
        ; Exact mapped bytes E8 42 42 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push dword ptr [eax + 34h]
        ; Exact mapped bytes E8 37 42 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push dword ptr [eax + 38h]
        ; Exact mapped bytes E8 2C 42 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push dword ptr [eax + 28h]
        ; Exact mapped bytes E8 21 42 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push dword ptr [eax + 2ch]
        ; Exact mapped bytes E8 16 42 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push dword ptr [eax + 40h]
        ; Exact mapped bytes E8 0B 42 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push dword ptr [eax + 44h]
        ; Exact mapped bytes E8 00 42 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push dword ptr [eax + 360h]
        ; Exact mapped bytes E8 F2 41 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 24h
        lea eax, [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 1]
        push 5
        pop eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 10h], eax
        lea eax, [ebp - 8]
        push eax
        lea eax, [ebp - 0ch]
        push eax
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 84 FD FF FF: call 0x588687c8
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push 4
        lea eax, [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 1]
        pop eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 8], eax
        lea eax, [ebp - 10h]
        push eax
        lea eax, [ebp - 0ch]
        push eax
        lea eax, [ebp - 8]
        push eax
        ; Exact mapped bytes E8 CC FD FF FF: call 0x58868833
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        leave
        ret
    }
}
