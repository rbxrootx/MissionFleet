// Reconstructed from FUN_100f34a0 Ghidra pseudocode and disassembly.
// It initializes a 256-slot overlay table and is checked against mapped bytes.
extern "C" void AllocateObjectThunk();
extern "C" void AttachByLayer();
extern "C" void AttachControlList();
extern "C" void CreateFullScreenControl();
extern "C" void CreateLogoControl();
extern "C" void CreateOverlayControl();
extern "C" void FUN_10018600();
extern "C" void FUN_100188e0();
extern "C" void FUN_10018950();
extern "C" void FUN_10022f80();
extern "C" void FUN_10032360();
extern "C" void FUN_100f3f40();
extern "C" void FUN_100ff120();
extern "C" void FUN_100ff160();
extern "C" void FUN_100ffac0();
extern "C" void FUN_10103b80();
extern "C" void FUN_101047f0();
extern "C" void InitializeCommon();
extern "C" void InitializeRowControl();
extern "C" void InitializeScreenBase();

extern "C" __declspec(naked) void CreateOverlayControl() {
    __asm {
        push -1
        push 101740dfh
        ; Exact immediate encoding: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact immediate encoding: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0ch
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        xor ebx, ebx
        ; Exact immediate encoding: mov esi, 100h
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 400h
        mov dword ptr [esp + 18h], edi
        ; Exact immediate encoding: mov dword ptr [edi + 1008h], 101765f8h
        __asm _emit 0xc7
        __asm _emit 0x87
        __asm _emit 0x08
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xf8
        __asm _emit 0x65
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [edi + 1020h], ebx
        mov dword ptr [edi + 100ch], esi
        mov dword ptr [edi + 1010h], ebx
        call AllocateObjectThunk
        mov dword ptr [edi + 101ch], eax
        mov dword ptr [edi + 1014h], ebx
        mov dword ptr [edi + 1018h], ebx
        mov dword ptr [edi + 1010h], ebx
        push 198h
        mov dword ptr [esp + 2ch], ebx
        mov dword ptr [edi + 142ch], esi
        ; Exact immediate encoding: mov dword ptr [edi], 101765f4h
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0xf4
        __asm _emit 0x65
        __asm _emit 0x17
        __asm _emit 0x10
        call AllocateObjectThunk
        add esp, 8
        mov dword ptr [esp + 10h], eax
        cmp eax, ebx
        ; Exact immediate encoding: mov byte ptr [esp + 24h], 1
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact immediate encoding: je short L_100F3540
        __asm _emit 0x74
        __asm _emit 0x0f
        push ebx
        push 101ac7d4h
        mov ecx, eax
        call FUN_100ffac0
        ; Exact immediate encoding: jmp short L_100F3542
        __asm _emit 0xeb
        __asm _emit 0x02
L_100F3540:
        xor eax, eax
L_100F3542:
        push 198h
        mov byte ptr [esp + 28h], bl
        mov dword ptr [edi + 1438h], eax
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 10h], eax
        cmp eax, ebx
        ; Exact immediate encoding: mov byte ptr [esp + 24h], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        ; Exact immediate encoding: je short L_100F3575
        __asm _emit 0x74
        __asm _emit 0x0f
        push ebx
        push 101ac7c4h
        mov ecx, eax
        call FUN_100ffac0
        ; Exact immediate encoding: jmp short L_100F3577
        __asm _emit 0xeb
        __asm _emit 0x02
L_100F3575:
        xor eax, eax
L_100F3577:
        mov byte ptr [esp + 24h], bl
        mov dword ptr [edi + 143ch], eax
        lea ebp, [edi + 0c08h]
        mov dword ptr [esp + 10h], esi
L_100F358B:
        mov dword ptr [ebp - 400h], ebx
        push 1ch
        mov dword ptr [ebp], ebx
        call AllocateObjectThunk
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 18h], esi
        cmp esi, ebx
        ; Exact immediate encoding: mov byte ptr [esp + 24h], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x03
        ; Exact immediate encoding: je short L_100F35DB
        __asm _emit 0x74
        __asm _emit 0x2e
        push 400h
        ; Exact immediate encoding: mov dword ptr [esi], 101765f0h
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0xf0
        __asm _emit 0x65
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esi + 18h], ebx
        ; Exact immediate encoding: mov dword ptr [esi + 4], 100h
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 8], ebx
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esi + 14h], eax
        mov dword ptr [esi + 0ch], ebx
        mov dword ptr [esi + 10h], ebx
        mov dword ptr [esi + 8], ebx
        ; Exact immediate encoding: jmp short L_100F35DD
        __asm _emit 0xeb
        __asm _emit 0x02
L_100F35DB:
        xor esi, esi
L_100F35DD:
        mov eax, dword ptr [esp + 10h]
        mov dword ptr [ebp + 41ch], esi
        add ebp, 4
        dec eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esp + 10h], eax
        ; Exact immediate encoding: jne short L_100F358B
        __asm _emit 0x75
        __asm _emit 0x96
        mov ecx, edi
        mov dword ptr [edi + 1424h], ebx
        call FUN_100f3f40
        mov ecx, dword ptr [esp + 1ch]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact immediate encoding: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        ret
    }
}
