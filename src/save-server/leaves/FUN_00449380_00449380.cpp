// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00449380 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_00449380_00449380() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov al, byte ptr [ebp - 8]
        mov byte ptr [ebp - 4], al
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 09: jmp 0x4493ac
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7E 1E: jle 0x4493d0
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov cl, byte ptr [eax]
        mov byte ptr [edx], cl
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB D3: jmp 0x4493a3
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov eax, dword ptr [ebp - 14h]
        mov esp, ebp
        pop ebp
        ret
    }
}
