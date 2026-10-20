// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58671380 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_58671380_58671380() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes 73 0F: jae 0x586713a1
        __asm _emit 0x73
        __asm _emit 0x0f
        mov edx, dword ptr [ebp + 8]
        shl edx, 8
        mov eax, dword ptr [ebp - 4]
        lea eax, [eax + edx + 20h]
        ; Exact mapped bytes EB 02: jmp 0x586713a3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
