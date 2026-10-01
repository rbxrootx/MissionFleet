// Reconstructed from FUN_100ffac0 Ghidra pseudocode and disassembly.
// The fallback path names the original "Sangduck Sprite File" resource.
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
extern "C" void FUN_100ffc40();
extern "C" void FUN_10103b80();
extern "C" void FUN_101047f0();
extern "C" void InitializeCommon();
extern "C" void InitializeRowControl();
extern "C" void InitializeScreenBase();

extern "C" __declspec(naked) void InitializeSpriteAssetResource() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        cmp eax, ebx
        ; Exact immediate encoding: mov dword ptr [esi], 10176780h
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x80
        __asm _emit 0x67
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact immediate encoding: je short L_100FFAE5
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [esp + 10h]
        push ecx
        push eax
        mov ecx, esi
        call FUN_100ffc40
        test eax, eax
        ; Exact immediate encoding: jne short L_100FFB51
        __asm _emit 0x75
        __asm _emit 0x6c
L_100FFAE5:
        lea edx, [esi + 108h]
        push 1017f3ech
        push edx
        ; Exact immediate encoding: mov dword ptr [esi + 4], 0ffffffffh
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [esi + 8], bl
        ; Exact immediate encoding: call dword ptr [101750b0h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact immediate encoding: mov al, 3
        __asm _emit 0xb0
        __asm _emit 0x03
        mov dword ptr [esi + 130h], ebx
        mov byte ptr [esi + 134h], bl
        mov byte ptr [esi + 15ch], al
        mov byte ptr [esi + 15dh], al
        mov dword ptr [esi + 160h], ebx
        mov dword ptr [esi + 164h], ebx
        mov dword ptr [esi + 16ch], ebx
        mov dword ptr [esi + 170h], ebx
        mov byte ptr [esi + 15eh], bl
        mov dword ptr [esi + 168h], ebx
        mov dword ptr [esi + 190h], ebx
        mov dword ptr [esi + 18ch], ebx
        mov dword ptr [esi + 194h], ebx
L_100FFB51:
        mov eax, esi
        pop esi
        pop ebx
        ret 8
    }
}
