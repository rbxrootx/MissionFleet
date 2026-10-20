// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587818D0 .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_587818d0_587818D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x587818f2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7D 4C: jge 0x58781946
        __asm _emit 0x7d
        __asm _emit 0x4c
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        lea edx, [ecx + eax + 0b8h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        shr ecx, 1
        and ecx, 1fh
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 2D FC FF FF: call 0x58781560
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        imul ecx, dword ptr [ebp - 18h], 18h
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 0b8h]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB A3: jmp 0x587818e9
        __asm _emit 0xeb
        __asm _emit 0xa3
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
