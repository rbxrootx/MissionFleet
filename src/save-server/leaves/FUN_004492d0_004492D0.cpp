// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004492D0 .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_004492d0_004492D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov al, byte ptr [ebp - 0ch]
        mov byte ptr [ebp - 4], al
        mov cl, byte ptr [ebp - 10h]
        mov byte ptr [ebp - 8], cl
        mov dl, byte ptr [ebp - 18h]
        mov byte ptr [ebp - 14h], dl
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp + 0ch]
        sub edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes EB 09: jmp 0x449308
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        sub eax, 1
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 7E 1E: jle 0x44932c
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 20h]
        mov al, byte ptr [edx]
        mov byte ptr [ecx], al
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        mov dword ptr [ebp - 24h], edx
        ; Exact mapped bytes EB D3: jmp 0x4492ff
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov eax, dword ptr [ebp - 24h]
        mov esp, ebp
        pop ebp
        ret
    }
}
