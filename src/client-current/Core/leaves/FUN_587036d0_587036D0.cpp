// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587036D0 .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_587036d0_587036D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0a8h], 0
        ; Exact mapped bytes 75 02: jne 0x587036e5
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 53: jmp 0x58703738
        __asm _emit 0xeb
        __asm _emit 0x53
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 90 9E E7 FF: call 0x5857d580
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x9e
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 208h], 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1b4h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 1b4h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 194h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 194h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 89 ED FF FF: call 0x587024c0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
