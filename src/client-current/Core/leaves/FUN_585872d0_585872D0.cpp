// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585872D0 .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_585872d0_585872D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0bch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c8h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0c0h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58587312
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 7D 25: jge 0x5858733d
        __asm _emit 0x7d
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0ach]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8ch]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 06 85 F1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x85
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CC: jmp 0x58587309
        __asm _emit 0xeb
        __asm _emit 0xcc
        mov esp, ebp
        pop ebp
        ret
    }
}
