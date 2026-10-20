// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C7A10 .. +0xCF bytes.
extern "C" __declspec(naked) void FUN_004c7a10_004C7A10() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sar eax, 5
        mov ecx, dword ptr [ebp + 8]
        and ecx, 1fh
        imul ecx, ecx, 24h
        mov edx, dword ptr [eax*4 + 5df120h]
        ; Exact mapped bytes 0F BE 44 0A 04: movsx eax, byte ptr [edx + ecx + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x04
        and eax, 80h
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 0ch], 8000h
        ; Exact mapped bytes 75 39: jne 0x4c7a79
        __asm _emit 0x75
        __asm _emit 0x39
        mov ecx, dword ptr [ebp + 8]
        sar ecx, 5
        mov edx, dword ptr [ebp + 8]
        and edx, 1fh
        imul edx, edx, 24h
        mov eax, dword ptr [ecx*4 + 5df120h]
        mov cl, byte ptr [eax + edx + 4]
        and cl, 7fh
        mov edx, dword ptr [ebp + 8]
        sar edx, 5
        mov eax, dword ptr [ebp + 8]
        and eax, 1fh
        imul eax, eax, 24h
        mov edx, dword ptr [edx*4 + 5df120h]
        mov byte ptr [edx + eax + 4], cl
        ; Exact mapped bytes EB 51: jmp 0x4c7aca
        __asm _emit 0xeb
        __asm _emit 0x51
        cmp dword ptr [ebp + 0ch], 4000h
        ; Exact mapped bytes 75 38: jne 0x4c7aba
        __asm _emit 0x75
        __asm _emit 0x38
        mov eax, dword ptr [ebp + 8]
        sar eax, 5
        mov ecx, dword ptr [ebp + 8]
        and ecx, 1fh
        imul ecx, ecx, 24h
        mov edx, dword ptr [eax*4 + 5df120h]
        mov al, byte ptr [edx + ecx + 4]
        or al, 80h
        mov ecx, dword ptr [ebp + 8]
        sar ecx, 5
        mov edx, dword ptr [ebp + 8]
        and edx, 1fh
        imul edx, edx, 24h
        mov ecx, dword ptr [ecx*4 + 5df120h]
        mov byte ptr [ecx + edx + 4], al
        ; Exact mapped bytes EB 10: jmp 0x4c7aca
        __asm _emit 0xeb
        __asm _emit 0x10
        ; Exact mapped bytes E8 B1 97 FE FF: call 0x4b1270
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x97
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 11: jmp 0x4c7adb
        __asm _emit 0xeb
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        neg eax
        sbb eax, eax
        and eax, 0ffffc000h
        add eax, 8000h
        mov esp, ebp
        pop ebp
        ret
    }
}
