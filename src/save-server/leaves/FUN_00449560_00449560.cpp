// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00449560 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_00449560_00449560() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 09: jmp 0x449578
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7E 1E: jle 0x44959c
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp + 8]
        mov cl, byte ptr [eax]
        mov byte ptr [edx], cl
        mov edx, dword ptr [ebp + 8]
        add edx, 1
        mov dword ptr [ebp + 8], edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 1
        mov dword ptr [ebp + 10h], eax
        ; Exact mapped bytes EB D3: jmp 0x44956f
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov eax, dword ptr [ebp + 10h]
        mov esp, ebp
        pop ebp
        ret
    }
}
