// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437B80 .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_00437b80_00437B80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 20h], ecx
        mov al, byte ptr [ebp + 8]
        mov byte ptr [ebp - 1ch], al
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 4]
        add edx, 1
        mov eax, dword ptr [ebp - 20h]
        cmp edx, dword ptr [eax + 8]
        ; Exact mapped bytes 75 4A: jne 0x437bea
        __asm _emit 0x75
        __asm _emit 0x4a
        mov dword ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ecx + 4]
        sub eax, dword ptr [edx]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 73 08: jae 0x437bc5
        __asm _emit 0x73
        __asm _emit 0x08
        lea edx, [ebp - 4]
        mov dword ptr [ebp - 24h], edx
        ; Exact mapped bytes EB 06: jmp 0x437bcb
        __asm _emit 0xeb
        __asm _emit 0x06
        lea eax, [ebp - 8]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + 4]
        sub ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [edx]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 86 8D 00 00: call 0x440970
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov byte ptr [edx], 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov al, byte ptr [ebp - 1ch]
        mov byte ptr [edx], al
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 4]
        add edx, 1
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp - 20h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
