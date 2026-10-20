// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58784440 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_58784440_58784440() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 424h], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58784467
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 5
        ; Exact mapped bytes 7D 13: jge 0x58784480
        __asm _emit 0x7d
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + eax*4 + 428h], 0ffffffffh
        ; Exact mapped bytes EB DE: jmp 0x5878445e
        __asm _emit 0xeb
        __asm _emit 0xde
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 43ch], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
