// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A09B7 .. +0xE1 bytes.
extern "C" __declspec(naked) void FUN_004a09b7_004A09B7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2F BE 02 00: call 0x4cc7f7
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 07: jge 0x4a09d5
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp + 8], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DC 42 08 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x42
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 7E 06: jle 0x4a09f1
        __asm _emit 0x7e
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp + 8], edx
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B7 42 08 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x42
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 8]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 7D 44: jge 0x4a0a4e
        __asm _emit 0x7d
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A7 42 08 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x42
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 90 BB 02 00: call 0x4cc5b9
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xbb
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 BE 48 FC FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 B4 BC 02 00: call 0x4cc702
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xbc
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        sub edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        add ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        lea edx, [eax + ecx + 1]
        push edx
        ; Exact mapped bytes E8 90 48 FC FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x48
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 8]
        mov al, byte ptr [ebp + 0ch]
        mov byte ptr [ecx + edx], al
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 30 42 08 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x42
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
