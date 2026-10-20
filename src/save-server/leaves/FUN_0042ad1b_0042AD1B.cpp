// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042AD1B .. +0x105 bytes.
extern "C" __declspec(naked) void FUN_0042ad1b_0042AD1B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 1fh
        ; Exact mapped bytes 0F 87 BE 00 00 00: ja 0x42ae0d
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        xor edx, edx
        mov dl, byte ptr [eax + 42ae34h]
        ; Exact mapped bytes FF 24 95 20 AE 42 00: jmp dword ptr [edx*4 + 0x42ae20]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x20
        __asm _emit 0xae
        __asm _emit 0x42
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov esi, esp
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        cmp esi, esp
        ; Exact mapped bytes E8 7B A0 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xa0
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x42ae0f
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 23h
        push 464h
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 48h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 44 C1 68 00: call dword ptr [0x68c144]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 49 A0 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xa0
        __asm _emit 0x03
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 0A: jne 0x42adb6
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D9 F1 FF FF: call 0x429f8d
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 21: jmp 0x42add7
        __asm _emit 0xeb
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 0ach], 1
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov esi, esp
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        cmp esi, esp
        ; Exact mapped bytes E8 19 A0 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xa0
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 34: jmp 0x42ae0d
        __asm _emit 0xeb
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 EE FE FF FF: call 0x42accf
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 26: jmp 0x42ae0f
        __asm _emit 0xeb
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov esi, esp
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 F3 9F 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x9f
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 F8 15 00 00: call 0x42c400
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 02: jmp 0x42ae0f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 D6 9F 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x9f
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
