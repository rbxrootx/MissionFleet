// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004387B0 .. +0xD2 bytes.
extern "C" __declspec(naked) void FUN_004387b0_004387B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F 85 9E 00 00 00: jne 0x43886c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [ebp + 0ch]
        mov byte ptr [ebp - 20h], al
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 4]
        add edx, 1
        mov eax, dword ptr [ebp - 24h]
        cmp edx, dword ptr [eax + 8]
        ; Exact mapped bytes 75 4A: jne 0x43882f
        __asm _emit 0x75
        __asm _emit 0x4a
        mov dword ptr [ebp - 8], 1
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ecx + 4]
        sub eax, dword ptr [edx]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 73 08: jae 0x43880a
        __asm _emit 0x73
        __asm _emit 0x08
        lea edx, [ebp - 8]
        mov dword ptr [ebp - 28h], edx
        ; Exact mapped bytes EB 06: jmp 0x438810
        __asm _emit 0xeb
        __asm _emit 0x06
        lea eax, [ebp - 0ch]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [edx + 4]
        sub ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 10h]
        add ecx, dword ptr [edx]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 41 81 00 00: call 0x440970
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov byte ptr [edx], 0
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov al, byte ptr [ebp - 20h]
        mov byte ptr [edx], al
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 4]
        add edx, 1
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ecx + 4]
        sub eax, 1
        ; Exact mapped bytes EB 10: jmp 0x43887c
        __asm _emit 0xeb
        __asm _emit 0x10
        mov dl, byte ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 C4 8C 00 00: call 0x441540
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
