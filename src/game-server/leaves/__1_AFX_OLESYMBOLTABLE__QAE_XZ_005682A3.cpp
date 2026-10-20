// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005682A3 .. +0x54 bytes.
extern "C" __declspec(naked) void __1_AFX_OLESYMBOLTABLE__QAE_XZ_005682A3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5682be
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 7D 16: jge 0x5682df
        __asm _emit 0x7d
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        push eax
        ; Exact mapped bytes E8 A6 29 F4 FF: call 0x4aac80
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x29
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes EB D6: jmp 0x5682b5
        __asm _emit 0xeb
        __asm _emit 0xd6
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 19 51 F8 FF: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x51
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov esp, ebp
        pop ebp
        ret
    }
}
