// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004336D4 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_004336d4_004336D4() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx + edx*4 + 2ch]
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [eax + ecx*4]
        cmp edx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 7E 1B: jle 0x433718
        __asm _emit 0x7e
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx + edx*4 + 2ch]
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [eax + ecx*4], edx
        ; Exact mapped bytes EB 33: jmp 0x43374b
        __asm _emit 0xeb
        __asm _emit 0x33
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx + edx*4 + 2ch]
        mov ecx, dword ptr [ebp + 10h]
        cmp dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes 7D 1A: jge 0x43374b
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + ecx*4 + 2ch]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx + eax*4], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
